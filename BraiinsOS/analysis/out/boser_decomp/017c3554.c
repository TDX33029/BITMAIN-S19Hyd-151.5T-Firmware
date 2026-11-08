// FUN_017c3554 @ 017c3554 size=272 calls_out=8 calls_in=2
// strings: runtime dropped the dispatch task | user code panicked

void FUN_017c3554(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_150 [8];
  int local_148;
  int local_144;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  
  uVar1 = FUN_0143b8e8(1,8);
  if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar2 = FUN_0197ac0c(), iVar2 != 0)) {
    uVar4 = 0x21;
    pcVar3 = "runtime dropped the dispatch task";
  }
  else {
    uVar4 = 0x12;
    pcVar3 = "user code panicked";
  }
  FUN_0143baec(uVar1,pcVar3,uVar4);
  iVar2 = param_1[1];
  param_1[1] = 0;
  if (*param_1 == 0) {
    if (iVar2 == 0) goto LAB_017c3634;
    local_a4 = 0;
    local_a8 = 3;
    local_b0 = uVar1;
    FUN_017cc880(auStack_150,param_1[2],&local_b0);
    if (local_148 != 5 || local_144 != 0) {
      FUN_017c36f8(auStack_150);
    }
  }
  else {
    if (iVar2 == 0) {
LAB_017c3634:
      FUN_0178e78c(uVar1);
      return;
    }
    local_ac = 0;
    local_b0 = 3;
    local_a8 = uVar1;
    FUN_0143c13c(auStack_150,param_1[2],&local_b0);
    FUN_017c376c(auStack_150);
  }
  return;
}

