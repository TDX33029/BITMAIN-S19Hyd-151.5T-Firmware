// FUN_01ad077c @ 01ad077c size=180 calls_out=2 calls_in=2
// strings: assertion failed: self.is_char_boundary(start) | assertion failed: self.is_char_boundary(end)

void FUN_01ad077c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *(uint *)(param_2 + 8);
  uVar5 = FUN_01935674(param_3,param_4,uVar4,param_5);
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)uVar5;
  iVar3 = *(int *)(param_2 + 4);
  if (uVar1 != 0) {
    if (uVar1 < uVar4) {
      if (*(char *)(iVar3 + uVar1) < -0x40) {
LAB_01ad07c8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: self.is_char_boundary(start)",0x2e,param_5);
      }
    }
    else if (uVar1 != uVar4) goto LAB_01ad07c8;
  }
  if (uVar2 == 0) {
LAB_01ad0818:
    *param_1 = iVar3 + uVar1;
    param_1[1] = iVar3 + uVar2;
    param_1[2] = param_2;
    *(undefined8 *)(param_1 + 3) = uVar5;
    return;
  }
  if (uVar2 < uVar4) {
    if (-0x41 < *(char *)(iVar3 + uVar2)) goto LAB_01ad0818;
  }
  else if (uVar2 == uVar4) goto LAB_01ad0818;
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("assertion failed: self.is_char_boundary(end)",0x2c,param_5);
}

