// FUN_01832bd8 @ 01832bd8 size=136 calls_out=1 calls_in=2
// strings: rustsecp256k1_v0_9_2_context_is_proper(ctx)

undefined4 FUN_01832bd8(int *param_1)

{
  if (*param_1 == 0) {
    (*(code *)param_1[0x28])("rustsecp256k1_v0_9_2_context_is_proper(ctx)",param_1[0x29]);
    return 0;
  }
  FUN_01832150();
  return 1;
}

