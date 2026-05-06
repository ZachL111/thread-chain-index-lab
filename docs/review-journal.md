# Review Journal

The repository goal stays the same: implement a C blockchain tooling project for index state machine modeling, using transition tables and invalid-transition tests. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its blockchain tooling focus without claiming live deployment or external usage.

## Cases

- `baseline`: `event finality`, score 171, lane `ship`
- `stress`: `nonce pressure`, score 191, lane `ship`
- `edge`: `settlement risk`, score 116, lane `watch`
- `recovery`: `proof depth`, score 134, lane `watch`
- `stale`: `event finality`, score 256, lane `ship`

## Note

The useful failure mode here is a wrong decision on a named case, not a vague style disagreement.
