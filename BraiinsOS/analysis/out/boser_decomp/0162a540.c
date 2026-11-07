// FUN_0162a540 @ 0162a540 size=432 calls_out=6 calls_in=1
// strings: 

void FUN_0162a540(undefined1 *param_1,char param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 extraout_r3;
  undefined1 extraout_r3_00;
  undefined1 extraout_r3_01;
  uint uVar4;
  int unaff_r9;
  int local_34;
  uint uStack_30;
  int iStack_2c;
  uint local_28;
  undefined1 local_24;
  
  if (param_2 == '\x03') {
    FUN_0162a4b8(&local_34,param_3,param_4);
    if (local_34 != -0x80000000) {
      *(int *)(param_1 + 4) = local_34;
      *(uint *)(param_1 + 8) = uStack_30;
      *(int *)(param_1 + 0xc) = iStack_2c;
      *param_1 = 4;
      return;
    }
    uVar3 = 0;
    uVar2 = 0;
    iStack_2c = unaff_r9;
    local_24 = extraout_r3_00;
  }
  else if (param_2 == '\v') {
    FUN_0162902c(&local_34,param_3,param_4);
    uVar2 = CONCAT13((undefined1)iStack_2c,uStack_30._1_3_);
    if ((char)local_34 != '\0') {
      *(uint *)(param_1 + 5) = uVar2;
      *param_1 = 4;
      *(short *)(param_1 + 9) = (short)((uint)iStack_2c >> 8);
      param_1[4] = (undefined1)uStack_30;
      *(uint *)(param_1 + 0xc) = local_28;
      param_1[0xb] = (char)((uint)iStack_2c >> 0x18);
      return;
    }
    uVar3 = 1;
    uStack_30 = CONCAT13((undefined1)uStack_30,local_34._1_3_);
    param_4 = local_28;
  }
  else if (param_2 == '\x1e') {
    FUN_01623ddc(&local_34,param_3,param_4);
    if (local_34 != -0x80000000) {
      *(int *)(param_1 + 4) = local_34;
      *(uint *)(param_1 + 8) = uStack_30;
      *param_1 = 4;
      *(int *)(param_1 + 0xc) = iStack_2c;
      return;
    }
    uVar2 = uStack_30 >> 8;
    uStack_30 = uStack_30 << 0x18;
    uVar3 = 2;
    local_24 = extraout_r3;
  }
  else {
    if (param_4 == 0) {
      uVar4 = 0;
      iVar1 = 1;
    }
    else {
      iVar1 = FUN_01298504(param_4,1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,param_4);
      }
      uVar4 = param_4;
    }
    FUN_01bed4e2(iVar1,param_3,param_4);
    uVar2 = uVar4 >> 8;
    uStack_30 = uVar4 << 0x18;
    uVar3 = 3;
    iStack_2c = iVar1;
    local_24 = extraout_r3_01;
  }
  *(uint *)(param_1 + 1) = uStack_30;
  param_1[0xb] = (char)((uint)iStack_2c >> 0x18);
  *param_1 = uVar3;
  param_1[0x10] = local_24;
  *(uint *)(param_1 + 0xc) = param_4;
  *(short *)(param_1 + 9) = (short)((uint)iStack_2c >> 8);
  *(uint *)(param_1 + 5) = uVar2 & 0xffffff | iStack_2c << 0x18;
  return;
}

