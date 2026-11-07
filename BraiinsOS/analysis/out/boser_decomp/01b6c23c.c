// FUN_01b6c23c @ 01b6c23c size=88 calls_out=1 calls_in=3
// strings: align_pointer | /aws-lc/crypto/poly1305/../internal.h | ((uintptr_t)ptr & (alignment - 1)) == 0

void FUN_01b6c23c(int param_1)

{
  if ((param_1 + (-param_1 & 0x3fU) & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("((uintptr_t)ptr & (alignment - 1)) == 0","/aws-lc/crypto/poly1305/../internal.h",
                 0xa6,"align_pointer");
  }
  return;
}

