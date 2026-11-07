// FUN_0094ea94 @ 0094ea94 size=416 calls_out=3 calls_in=1
// strings: 

void FUN_0094ea94(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 ***extraout_r1;
  undefined4 extraout_r3;
  undefined4 uVar3;
  int iVar4;
  undefined4 ***pppuVar5;
  undefined4 ***pppuVar6;
  uint unaff_r9;
  undefined4 ***unaff_r10;
  uint unaff_r11;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_d16;
  undefined4 ***local_48;
  uint local_44;
  int local_40;
  undefined4 uStack_3c;
  
  if (param_2[1] == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  iVar4 = *param_2;
  pppuVar5 = &local_48;
  param_2[1] = param_2[1] + -1;
  FUN_0094f574(pppuVar5,iVar4);
  if ((char)local_48 != '\x01') {
    uVar2 = (uint)local_48 >> 8 & 0xff;
    if (uVar2 == 0) {
      uVar2 = 0;
      pppuVar6 = (undefined4 ***)0x2;
      local_44 = 0;
      local_48 = extraout_r1;
      uVar3 = extraout_r3;
LAB_0094ebb4:
      *(undefined8 *)(param_1 + 6) = unaff_d8;
      *(undefined8 *)(param_1 + 10) = unaff_d9;
      param_1[4] = pppuVar5;
      param_1[8] = unaff_r10;
      param_1[0xc] = local_48;
      *(undefined8 *)(param_1 + 0xe) = in_d16;
      param_1[5] = unaff_r11;
      param_1[9] = unaff_r9;
      param_1[0xd] = local_44;
      *param_1 = pppuVar6;
      param_1[1] = uVar2;
      param_1[2] = iVar4;
      param_1[3] = uVar3;
      return;
    }
    if (uVar2 == 1) {
      FUN_00abb7a8(pppuVar5,iVar4);
      uVar3 = uStack_3c;
      iVar1 = local_40;
      uVar2 = local_44;
      pppuVar6 = local_48;
      if (local_48 != (undefined4 ***)0x2 || local_44 != 0) {
        FUN_00abb7a8(&local_48,iVar4);
        unaff_r11 = local_44;
        pppuVar5 = local_48;
        if (local_48 != (undefined4 ***)0x2 || local_44 != 0) {
          unaff_d8 = CONCAT44(uStack_3c,local_40);
          FUN_00abb7a8(&local_48,iVar4);
          unaff_r9 = local_44;
          unaff_r10 = local_48;
          if (local_48 != (undefined4 ***)0x2 || local_44 != 0) {
            unaff_d9 = CONCAT44(uStack_3c,local_40);
            FUN_00abb7a8(&local_48,iVar4);
            if (local_48 != (undefined4 ***)0x2 || local_44 != 0) {
              in_d16 = CONCAT44(uStack_3c,local_40);
              iVar4 = iVar1;
              goto LAB_0094ebb4;
            }
          }
        }
      }
      local_44 = local_40;
    }
    else {
      local_48 = (undefined4 ***)&DAT_80000004;
      local_44 = uVar2;
      local_44 = FUN_0073696c(&local_48);
    }
  }
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = local_44;
  return;
}

