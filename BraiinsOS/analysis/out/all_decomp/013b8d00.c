// FUN_013b8d00 @ 013b8d00 size=480 calls_out=3 calls_in=0
// strings: conflicting transitionmultiple epsilon transitions to match state | conflicting transitionmultiple epsilon transitions to match state

void FUN_013b8d00(int *param_1,int param_2,int param_3,undefined4 *param_4,int param_5,uint param_6)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
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
  
  FUN_013b8510(&local_68,param_2,*param_4);
  if (local_68 != 0x30) {
    param_1[2] = local_60;
    param_1[3] = iStack_5c;
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
  uVar6 = *(uint *)(param_2 + 0x130);
  bVar1 = *(byte *)((int)param_4 + 5);
  uVar13 = param_6 | local_64 << 0xb | (uint)*(byte *)(param_2 + 0x28c) << 10;
  iVar14 = *(int *)(param_2 + 0x10);
  uVar10 = *(uint *)(param_2 + 0x14);
  uVar5 = bVar1 + 1;
  bVar2 = false;
  uVar4 = (uint)*(byte *)(param_4 + 1);
  cVar11 = '\0';
  do {
    if (bVar2) {
      uVar3 = uVar4;
      if (uVar4 < 0x101) {
        uVar3 = 0x100;
      }
      uVar7 = uVar4;
      if (uVar4 < uVar5) {
        uVar7 = uVar5;
      }
      uVar4 = uVar4 - 1;
      do {
        uVar9 = uVar4;
        if (uVar9 - uVar7 == -1) goto LAB_013b8e98;
        if (uVar9 - uVar3 == -1) goto LAB_013b8ea8;
        uVar4 = uVar9 + 1;
        cVar12 = *(char *)(param_2 + 0x18c + uVar9 + 1);
      } while (cVar11 == cVar12);
      uVar9 = uVar9 + 2;
    }
    else {
      if (bVar1 < uVar4) {
LAB_013b8e98:
        *param_1 = 0x30;
        return;
      }
      if (0xff < uVar4) {
LAB_013b8ea8:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_01893040,&DAT_01892e90);
      }
      cVar12 = *(char *)(param_2 + 0x18c + uVar4);
      uVar9 = uVar4 + 1;
    }
    uVar4 = (param_3 << (uVar6 & 0x1f)) + (uint)*(byte *)(param_2 + 0x2c + (uVar4 & 0xff));
    if (uVar10 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar4,uVar10,&DAT_01893bf0);
    }
    piVar8 = (int *)(iVar14 + uVar4 * 8);
    uVar4 = uVar9;
    cVar11 = cVar12;
    if ((uint)piVar8[1] < 0x800) {
      *piVar8 = param_5;
      piVar8[1] = uVar13;
      bVar2 = true;
    }
    else {
      bVar2 = true;
      if (*piVar8 != param_5 || piVar8[1] != uVar13) {
        *param_1 = 0x2f;
        param_1[1] = (int)"conflicting transitionmultiple epsilon transitions to match state";
        param_1[2] = 0x16;
        return;
      }
    }
  } while( true );
}

