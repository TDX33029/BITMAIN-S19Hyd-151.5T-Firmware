// FUN_017dbe94 @ 017dbe94 size=344 calls_out=2 calls_in=2
// strings: 

void FUN_017dbe94(uint *param_1,int param_2,undefined4 param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_238 [128];
  uint local_38;
  uint local_34;
  int iStack_30;
  int local_2c;
  
  uVar9 = *(uint *)(param_2 + 0x74);
  if (uVar9 == 0) {
    *(undefined1 *)param_1 = 4;
    param_1[1] = 0;
  }
  else {
    iVar2 = 0;
    do {
      local_238[iVar2 * 2] = 1;
      iVar3 = iVar2 + 1;
      local_238[iVar2 * 2 + 1] = 0;
      iVar2 = iVar3;
    } while (iVar3 != 0x40);
    FUN_018b65e8(&local_38,param_2 + 0x68);
    uVar4 = local_34 - local_38 >> 2;
    uVar10 = uVar4 * -0x55555555;
    uVar5 = ((uint)(local_2c - iStack_30) >> 2) * -0x55555555 + uVar10;
    uVar1 = 0x40;
    if (uVar5 < 0x40) {
      uVar1 = uVar5;
    }
    if (uVar5 != 0) {
      uVar5 = local_38;
      uVar4 = iStack_30 + uVar4 * -4;
      uVar7 = 0;
      do {
        uVar8 = uVar4;
        if (uVar7 < uVar10) {
          uVar8 = uVar5;
        }
        uVar5 = uVar5 + 0xc;
        uVar6 = *(undefined4 *)(uVar8 + 8);
        local_238[uVar7 * 2] = *(undefined4 *)(uVar8 + 4);
        uVar8 = uVar7 + 1;
        local_238[uVar7 * 2 + 1] = uVar6;
        uVar4 = uVar4 + 0xc;
        uVar7 = uVar8;
      } while (uVar1 != uVar8);
    }
    uVar4 = 0x40;
    if (uVar9 < 0x40) {
      uVar4 = uVar9;
    }
    (*param_4)(&local_38,param_3,local_238,uVar4);
    if (((char)local_38 == '\x04') || ((local_38 & 0xff) == 4)) {
      FUN_018dff98(param_2 + 0x60,local_34);
      param_1[1] = local_34;
      *(undefined1 *)param_1 = 4;
    }
    else {
      *param_1 = local_38;
      param_1[1] = local_34;
    }
  }
  return;
}

