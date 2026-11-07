// FUN_0136ea84 @ 0136ea84 size=404 calls_out=3 calls_in=1
// strings: non-empty nodes

void FUN_0136ea84(int *param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar7 = param_2[1];
  uVar3 = *(uint *)(iVar7 + 0x1c);
  iVar8 = param_2[2];
  if (param_3 + 1U < uVar3) {
    uVar6 = *param_2;
    do {
      *(uint *)(iVar7 + 0x1c) = uVar3 - 1;
      piVar4 = (int *)(*(int *)(iVar7 + 0x18) + (uVar3 - 1) * 0x10);
      local_68 = *piVar4;
      local_64 = piVar4[1];
      iVar5 = piVar4[2];
      uVar3 = piVar4[3];
      local_5c = uVar3 & 0xffffff00;
      local_60 = iVar5;
      if ((uVar3 & 1) != 0) {
        if (iVar5 == local_68) {
          FUN_013c3fcc(&local_68);
        }
        piVar4 = (int *)(local_64 + iVar5 * 8);
        *piVar4 = iVar8;
        piVar4[1] = uVar3 >> 8 & 0xffff;
        local_60 = iVar5 + 1;
      }
      local_78 = local_68;
      iStack_74 = local_64;
      iStack_70 = local_60;
      FUN_0136ec40(&local_68,uVar6,iVar7,&local_78);
      if (local_68 != 0x2a) {
        param_1[2] = local_60;
        param_1[3] = local_5c;
        param_1[4] = iStack_58;
        param_1[5] = iStack_54;
        param_1[6] = local_50;
        param_1[7] = iStack_4c;
        param_1[8] = iStack_48;
        param_1[9] = iStack_44;
        param_1[10] = iStack_40;
        param_1[0xb] = local_3c;
        param_1[0xc] = iStack_38;
        param_1[0xd] = iStack_34;
        param_1[0xe] = iStack_30;
        param_1[0xf] = iStack_2c;
        *param_1 = local_68;
        param_1[1] = local_64;
        return;
      }
      uVar3 = *(uint *)(iVar7 + 0x1c);
      iVar8 = local_64;
    } while (param_3 + 1U < uVar3);
  }
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("non-empty nodes",0xf,&DAT_018927e0);
  }
  iVar7 = *(int *)(iVar7 + 0x18) + uVar3 * 0x10;
  uVar2 = *(ushort *)(iVar7 + -3);
  bVar1 = *(byte *)(iVar7 + -4);
  *(undefined1 *)(iVar7 + -4) = 0;
  if ((bVar1 & 1) != 0) {
    iVar5 = *(int *)(iVar7 + -8);
    if (iVar5 == *(int *)(iVar7 + -0x10)) {
      FUN_013c3fcc(iVar7 + -0x10);
    }
    piVar4 = (int *)(*(int *)(iVar7 + -0xc) + iVar5 * 8);
    *piVar4 = iVar8;
    piVar4[1] = (uint)uVar2;
    *(int *)(iVar7 + -8) = iVar5 + 1;
  }
  *param_1 = 0x2a;
  return;
}

