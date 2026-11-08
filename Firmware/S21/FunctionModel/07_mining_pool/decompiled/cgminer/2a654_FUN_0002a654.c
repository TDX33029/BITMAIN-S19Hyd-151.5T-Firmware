// FUN_0002a654 @ 0002a654  size=276  callers=7
// program: cgminer


void FUN_0002a654(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_1c [2];
  
  uVar2 = *(undefined4 *)(param_1 + 0x154);
  FUN_0002a618();
  FUN_00023324(param_1,param_2,0x1c0,"cgminer.c","_copy_work",0x139a);
  *(undefined4 *)(param_1 + 0x154) = uVar2;
  if (*(int *)(param_2 + 0x120) != 0) {
    uVar2 = __strdup();
    *(undefined4 *)(param_1 + 0x120) = uVar2;
  }
  if (*(int *)(param_2 + 0x140) != 0) {
    uVar2 = __strdup();
    *(undefined4 *)(param_1 + 0x140) = uVar2;
  }
  if (*(int *)(param_2 + 0x134) == 0) {
    if (param_3 != 0) {
      uVar1 = *(uint *)(param_1 + 0x44);
      uVar1 = param_3 + (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                        uVar1 >> 0x18);
      *(uint *)(param_1 + 0x44) =
           uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
           uVar1 >> 0x18;
    }
  }
  else if (param_3 == 0) {
    uVar2 = __strdup();
    *(undefined4 *)(param_1 + 0x134) = uVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x44);
    uVar1 = param_3 + (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                      uVar1 >> 0x18);
    *(uint *)(param_1 + 0x44) =
         uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
         uVar1 >> 0x18;
    FUN_0001fb7c(local_1c,*(undefined4 *)(param_2 + 0x134),4);
    uVar1 = param_3 + (local_1c[0] << 0x18 | (local_1c[0] >> 8 & 0xff) << 0x10 |
                       (local_1c[0] >> 0x10 & 0xff) << 8 | local_1c[0] >> 0x18);
    local_1c[0] = uVar1 * 0x1000000 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
                  uVar1 >> 0x18;
    uVar2 = FUN_0001fac8(local_1c,4);
    *(undefined4 *)(param_1 + 0x134) = uVar2;
  }
  if (*(int *)(param_2 + 0x148) != 0) {
    uVar2 = __strdup();
    *(undefined4 *)(param_1 + 0x148) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  return;
}

