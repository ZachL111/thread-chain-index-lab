# thread-chain-index-lab

`thread-chain-index-lab` is a C project in blockchain tooling. Its focus is to implement a C blockchain tooling project for index state machine modeling, using transition tables and invalid-transition tests.

## Project Rationale

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Thread Chain Index Lab Review Notes

For a quick review, compare `event finality` with `settlement risk` before reading the middle cases.

## Feature Set

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/thread-chain-index-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `settlement risk`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture

The repository has two validation layers: the original compact policy fixture and the domain review fixture. They are separate so one can change without hiding failures in the other.

The C implementation avoids hidden state so fixture changes are easy to reason about.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Test Command

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Next Improvements

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
