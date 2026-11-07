// FUN_0132e008 @ 0132e008 size=896 calls_out=3 calls_in=8
// strings: Unexpected end of file

void FUN_0132e008(undefined4 *param_1,int *param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_48;
  uint local_44;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  uVar13 = param_2[0xe];
  if (param_4 <= param_2[0xf] - uVar13) {
    uVar1 = uVar13 + param_4;
    if ((CARRY4(uVar13,param_4)) || ((uint)param_2[9] < uVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar13,uVar1,param_2[9],&DAT_01890640);
    }
    FUN_016dd1aa(param_3,param_2[8] + uVar13,param_4);
    param_2[0xe] = uVar1;
    *param_1 = 4;
    return;
  }
  puVar8 = (uint *)(param_2 + 10);
  uVar1 = param_2[0xc];
  uVar6 = param_2[0xd];
  if ((uVar1 & uVar6) == 0xffffffff) {
    uVar9 = *puVar8 + uVar13;
    iVar7 = param_2[0xb] + (uint)CARRY4(*puVar8,uVar13);
  }
  else {
    uVar9 = *puVar8 + uVar13;
    iVar7 = param_2[0xb] + (uint)CARRY4(*puVar8,uVar13);
    uVar12 = iVar7 + (uint)(uVar1 < uVar9);
    if (uVar6 == uVar12 && (uint)(param_4 <= uVar1 - uVar9) <= uVar6 - uVar12) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 1;
      return;
    }
  }
  *puVar8 = uVar9;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[8] = 1;
  param_2[9] = 0;
  param_2[0xb] = iVar7;
  if (*param_2 != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 1;
    return;
  }
  iVar2 = param_2[1];
  if (iVar2 == 0) {
    iVar10 = param_2[3];
    iVar2 = param_2[2];
    (**(code **)(iVar10 + 0x30))(iVar2,uVar13);
    pcVar11 = *(code **)(iVar10 + 0x2c);
    uVar13 = 0;
    do {
      (*pcVar11)(&local_3c,iVar2);
      if (local_3c != 0) {
        local_44 = local_34;
        local_48 = local_38;
        goto joined_r0x0132e2ec;
      }
      if (local_34 == 0) goto LAB_0132e2b4;
      uVar1 = local_34;
      if (param_4 - uVar13 < local_34) {
        uVar1 = param_4 - uVar13;
      }
      uVar6 = uVar1 + uVar13;
      if ((CARRY4(uVar1,uVar13)) || (param_4 < uVar6)) goto LAB_0132e35c;
      FUN_016dd1aa(param_3 + uVar13,local_38,uVar1);
      (**(code **)(iVar10 + 0x30))(iVar2,uVar1);
      uVar13 = uVar6;
    } while (uVar6 != param_4);
  }
  else {
    uVar3 = param_2[2];
    uVar1 = param_2[4];
    iVar10 = param_2[5];
    iVar4 = param_2[6];
    uVar12 = param_2[3] + uVar13;
    if ((uint)param_2[4] < param_2[3] + uVar13) {
      uVar12 = param_2[4];
    }
    iVar5 = param_2[7];
    param_2[3] = uVar12;
    uVar13 = 0;
    do {
      if (uVar1 <= uVar12) {
        local_34 = 0;
        local_3c = iVar2;
        local_38 = uVar3;
        local_30 = iVar10;
        (**(code **)(iVar5 + 0x24))(&local_2c,iVar4,&local_3c);
        param_2[3] = 0;
        param_2[4] = local_34;
        param_2[5] = local_30;
        if ((char)local_2c != '\x04') {
          local_44 = local_28;
          local_48 = local_2c;
joined_r0x0132e2ec:
          if ((local_48 & 0xff) != 4) goto LAB_0132e33c;
          break;
        }
        uVar12 = 0;
        iVar10 = local_30;
        uVar1 = local_34;
      }
      if (uVar1 == uVar12) goto LAB_0132e2b4;
      uVar14 = uVar1 - uVar12;
      if (param_4 - uVar13 < uVar1 - uVar12) {
        uVar14 = param_4 - uVar13;
      }
      uVar6 = uVar14 + uVar13;
      if ((CARRY4(uVar14,uVar13)) || (param_4 < uVar6)) {
LAB_0132e35c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar13,uVar6,param_4,&DAT_018906a0);
      }
      FUN_016dd1aa(param_3 + uVar13,iVar2 + uVar12,uVar14);
      uVar12 = uVar12 + uVar14;
      if (uVar1 < uVar12) {
        uVar12 = uVar1;
      }
      param_2[3] = uVar12;
      uVar13 = uVar6;
    } while (uVar6 != param_4);
  }
LAB_0132e2f0:
  *param_1 = 4;
  *puVar8 = uVar9 + param_4;
  param_2[0xb] = iVar7 + (uint)CARRY4(uVar9,param_4);
  return;
LAB_0132e2b4:
  FUN_015e79d4(&local_48,0x25,"Unexpected end of file",0x16);
  if ((char)local_48 != '\x04') {
LAB_0132e33c:
    *param_1 = 0;
    param_1[1] = local_48;
    param_1[2] = local_44;
    return;
  }
  goto LAB_0132e2f0;
}

