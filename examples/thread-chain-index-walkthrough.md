# Thread Chain Index Lab Walkthrough

This note is the quickest way to read the extra review model in `thread-chain-index-lab`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 171 | ship |
| stress | nonce pressure | 191 | ship |
| edge | settlement risk | 116 | watch |
| recovery | proof depth | 134 | watch |
| stale | event finality | 256 | ship |

Start with `stale` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `edge` becomes less cautious without a clear reason, I would inspect the drag input first.
