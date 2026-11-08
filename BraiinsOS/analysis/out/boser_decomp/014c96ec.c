// FUN_014c96ec @ 014c96ec size=752 calls_out=7 calls_in=4
// strings: 

void FUN_014c96ec(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  uint local_48;
  byte *pbStack_44;
  int *piStack_40;
  byte *local_3c;
  uint local_38;
  uint uStack_34;
  int *piStack_30;
  uint uStack_2c;
  
  puVar3 = (uint *)param_2[5];
  if (puVar3 == (uint *)param_2[7]) {
LAB_014c9720:
    *param_1 = &DAT_80000016;
    return;
  }
  uVar9 = *puVar3;
  param_2[5] = (uint)(puVar3 + 8);
  if (uVar9 == 0x80000015) goto LAB_014c9720;
  puVar5 = (uint *)((uint)&local_48 | 4);
  param_2[8] = param_2[8] + 1;
  uVar6 = puVar3[2];
  uVar10 = puVar3[3];
  *puVar5 = puVar3[1];
  puVar5[1] = uVar6;
  puVar5[2] = uVar10;
  local_38 = puVar3[4];
  uStack_34 = puVar3[5];
  piVar7 = (int *)puVar3[6];
  uStack_2c = puVar3[7];
  local_48 = uVar9;
  piStack_30 = piVar7;
  if (*param_2 != 0x80000015) {
    FUN_014c81b0(param_2);
  }
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = (uint)piStack_30;
  param_2[3] = uStack_2c;
  uVar6 = 0x15;
  if ((int)uVar9 < 0) {
    uVar6 = uVar9 ^ 0x80000000;
  }
  if (0xe < uVar6 - 1) {
switchD_014c97b0_caseD_2:
    uVar4 = FUN_014c8278(&local_48,&local_38,&DAT_01cf9e44);
    *param_1 = 0x80000017;
    param_1[1] = uVar4;
    return;
  }
  pbVar8 = &DAT_80000001;
  uVar10 = 0;
  uVar9 = (&switchD_014c97b0::switchdataD_014c97b4)[uVar6 - 1];
  pbVar11 = pbStack_44;
  switch(uVar6) {
  case 1:
    break;
  default:
    goto switchD_014c97b0_caseD_2;
  case 4:
    pbVar8 = &DAT_80000004;
    pbVar11 = (byte *)0x0;
    break;
  case 0xc:
    if (local_3c == &SUB_00000004) {
      if (*piStack_40 == 0x64697575) {
LAB_014c997c:
        pbVar8 = (byte *)0x80000015;
        pbVar11 = (byte *)0x0;
        goto LAB_014c99b0;
      }
      piVar7 = (int *)thunk_FUN_01be5118(4);
      if (piVar7 == (int *)0x0) {
        uVar4 = 1;
        local_3c = &SUB_00000004;
        goto LAB_014c990c;
      }
      pbVar11 = &SUB_00000004;
    }
    else {
      if ((int)local_3c < 0) {
        uVar4 = 0;
        local_3c = pbVar8;
LAB_014c990c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar4,local_3c);
      }
      if (local_3c == (byte *)0x0) {
        pbVar11 = (byte *)0x0;
        piVar7 = (int *)&DAT_00000001;
      }
      else {
        uVar4 = 1;
        piVar7 = (int *)FUN_01298504(local_3c,1);
        if (piVar7 == (int *)0x0) goto LAB_014c990c;
        pbVar11 = local_3c;
      }
    }
    FUN_01bed4e2(piVar7,piStack_40,local_3c);
    pbVar8 = &DAT_8000000c;
    uVar10 = (uint)pbVar11 & 0x7fffff00;
    goto LAB_014c99b0;
  case 0xd:
    if ((piStack_40 == (int *)&SUB_00000004) && (*(int *)pbStack_44 == 0x64697575)) {
LAB_014c993c:
      pbVar8 = (byte *)0x80000015;
      pbVar11 = (byte *)0x0;
    }
    else {
      uVar10 = (uint)pbStack_44 & 0xffffff00;
      pbVar8 = (byte *)0x8000000d;
    }
    break;
  case 0xe:
    if (local_3c == &SUB_00000004) {
      cVar1 = (char)*piStack_40;
      bVar13 = cVar1 == 'u';
      if (bVar13) {
        cVar1 = *(char *)((int)piStack_40 + 1);
      }
      bVar12 = bVar13 && cVar1 == 'u';
      if (bVar13 && cVar1 == 'u') {
        bVar12 = *(char *)((int)piStack_40 + 2) == 'i';
      }
      if ((bVar12) && (*(char *)((int)piStack_40 + 3) == 'd')) goto LAB_014c997c;
LAB_014c986c:
      pbVar11 = &DAT_00000001;
      piVar7 = (int *)FUN_01298504(local_3c,1);
      if (piVar7 == (int *)0x0) {
LAB_014c98f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(pbVar11,local_3c);
      }
      pbVar11 = local_3c;
    }
    else {
      pbVar11 = (byte *)0x0;
      if ((int)local_3c < 0) goto LAB_014c98f0;
      if (local_3c != (byte *)0x0) goto LAB_014c986c;
      piVar7 = (int *)&DAT_00000001;
    }
    FUN_01bed4e2(piVar7,piStack_40,local_3c);
    uVar10 = (uint)pbVar11 & 0xffffff00;
    pbVar8 = (byte *)0x8000000e;
LAB_014c99b0:
    FUN_019bb7e0(pbStack_44,piStack_40);
    goto LAB_014c99c4;
  case 0xf:
    if (piStack_40 == (int *)&SUB_00000004) {
      uVar9 = (uint)*pbStack_44;
    }
    if (piStack_40 == (int *)&SUB_00000004 && uVar9 == 0x75) {
      bVar2 = pbStack_44[1];
      bVar13 = bVar2 == 0x75;
      if (bVar13) {
        bVar2 = pbStack_44[2];
      }
      if ((bVar13 && bVar2 == 0x69) && (pbStack_44[3] == 100)) goto LAB_014c993c;
    }
    uVar10 = (uint)pbStack_44 & 0xffffff00;
    pbVar8 = (byte *)0x8000000f;
  }
  FUN_014c81b0(&local_48);
  piVar7 = piStack_40;
LAB_014c99c4:
  *param_1 = pbVar8;
  param_1[3] = local_3c;
  param_1[1] = uVar10 | (uint)pbVar11 & 0xff;
  param_1[2] = piVar7;
  return;
}

