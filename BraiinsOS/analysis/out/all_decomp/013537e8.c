// FUN_013537e8 @ 013537e8 size=468 calls_out=2 calls_in=1
// strings: 

void FUN_013537e8(int *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  int local_80;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar14 = FUN_013528d4(*(undefined1 *)(param_3 + 1),*param_3);
  iVar9 = (int)uVar14;
  iVar11 = (int)((ulonglong)uVar14 >> 0x20);
  if (iVar9 != 0) {
    do {
      iVar5 = iVar11;
      if (iVar5 == 0) {
        iVar5 = 0;
        break;
      }
      iVar11 = iVar9 + iVar5;
      pbVar7 = (byte *)(iVar11 + -1);
      uVar8 = (uint)(char)*pbVar7;
      if (0x7fffffff < uVar8) {
        pbVar7 = (byte *)(iVar11 + -2);
        bVar2 = *pbVar7;
        if ((char)bVar2 < -0x40) {
          pbVar7 = (byte *)(iVar11 + -3);
          bVar3 = *pbVar7;
          if ((char)bVar3 < -0x40) {
            pbVar7 = (byte *)(iVar11 + -4);
            uVar12 = (int)(char)bVar3 & 0x3fU | (*pbVar7 & 7) << 6;
          }
          else {
            uVar12 = bVar3 & 0xf;
          }
          uVar12 = (int)(char)bVar2 & 0x3fU | uVar12 << 6;
        }
        else {
          uVar12 = bVar2 & 0x1f;
        }
        uVar8 = uVar8 & 0x3f | uVar12 << 6;
      }
      iVar11 = (int)pbVar7 - iVar9;
    } while (uVar8 == 0x23);
    iVar11 = param_2[1];
    iVar13 = *param_2;
    local_48 = *(undefined4 *)(iVar11 + 0xc);
    local_44 = *(undefined4 *)(iVar11 + 0x10);
    local_40 = *(undefined4 *)(iVar11 + 0x14);
    uStack_3c = *(undefined4 *)(iVar11 + 0x18);
    uStack_38 = *(undefined4 *)(iVar11 + 0x1c);
    local_34 = *(undefined4 *)(iVar11 + 0x20);
    uStack_30 = *(undefined4 *)(iVar11 + 0x24);
    uStack_2c = *(undefined4 *)(iVar11 + 0x28);
    uStack_28 = *(undefined4 *)(iVar11 + 0x2c);
    FUN_0134831c(&local_80,iVar13,&local_48,iVar9,iVar5);
    if (local_80 != -0x7ffffff6) {
      param_1[2] = local_78;
      param_1[3] = iStack_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      param_1[6] = iStack_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      *param_1 = local_80;
      param_1[1] = local_7c;
      return;
    }
    piVar6 = (int *)param_2[2];
    if (piVar6 != (int *)0x0) {
      do {
        iVar11 = *piVar6;
        bVar4 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar4);
      *piVar6 = iVar11 + 1;
      if (iVar11 < 0) goto LAB_013539b8;
    }
    param_1[3] = (int)piVar6;
    *param_1 = -0x7ffffff6;
    param_1[1] = iVar13;
    param_1[2] = local_7c;
    return;
  }
  iVar11 = *param_2;
  piVar6 = (int *)param_2[1];
  do {
    iVar9 = *piVar6;
    bVar4 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar4);
  *piVar6 = iVar9 + 1;
  if (iVar9 < 0) {
LAB_013539b8:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x13539b8);
    (*pcVar1)();
  }
  piVar10 = (int *)param_2[2];
  if (piVar10 != (int *)0x0) {
    do {
      iVar9 = *piVar10;
      bVar4 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar4);
    *piVar10 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_013539b8;
  }
  param_1[1] = iVar11;
  param_1[2] = (int)piVar6;
  param_1[3] = (int)piVar10;
  *param_1 = -0x7ffffff6;
  return;
}

