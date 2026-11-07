// FUN_01329168 @ 01329168 size=260 calls_out=3 calls_in=14
// strings: 

void FUN_01329168(int *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_18;
  undefined1 uStack_14;
  
  FUN_01328ef8(&local_28,param_2,param_3 << 3);
  if (local_28 == 4) {
    if (param_4 == 0) {
      uVar3 = *(uint *)(param_2 + 0x18);
      uVar2 = *(uint *)(param_2 + 0x1c);
      if (4 < uVar3 - uVar2) {
        uVar1 = 0;
        goto LAB_013291d0;
      }
      local_18 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0x18);
      uVar2 = *(uint *)(param_2 + 0x1c);
      if (4 < uVar3 - uVar2) {
        uVar1 = 1;
LAB_013291d0:
        if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar2,uVar3,uVar3,&DAT_0188fa90);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x14) + uVar2) = uVar1;
        *(uint *)(param_2 + 0x1c) = uVar2 + 1;
        *param_1 = 4;
        return;
      }
      local_18 = 1;
    }
    uStack_14 = 0;
    FUN_01328914(&local_28,param_2,&local_18,1);
    if (local_28 == 4) {
      *param_1 = 4;
      return;
    }
  }
  *param_1 = local_28;
  param_1[1] = iStack_24;
  param_1[2] = iStack_20;
  return;
}

