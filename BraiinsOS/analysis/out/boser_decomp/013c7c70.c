// FUN_013c7c70 @ 013c7c70 size=704 calls_out=5 calls_in=2
// strings: 

void FUN_013c7c70(char *param_1,int *param_2,short *param_3,byte param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *in_r12;
  byte *unaff_lr;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  char local_30 [12];
  
  uVar13 = param_2[1];
  pbVar8 = (byte *)param_2[2];
  uVar9 = param_2[3];
  uVar6 = uVar13 - uVar9;
  do {
    iVar10 = 0;
    while( true ) {
      if ((param_4 & param_5 <= uVar13 - uVar9) != 0) {
        *(uint *)(param_1 + 4) = uVar6;
        cVar5 = '\x06';
        *(uint *)(param_1 + 8) = param_5;
        goto LAB_013c7ed0;
      }
      if (iVar10 != 0) break;
      if (uVar9 == 0) goto LAB_013c7eac;
      bVar2 = *pbVar8;
      if (bVar2 == 0) {
        *(undefined1 *)(param_3 + 0x20) = 1;
        iVar10 = 3;
      }
      else {
        iVar10 = 2;
        if ((bVar2 & 0xc0) != 0xc0) {
          if ((bVar2 & 0xc0) != 0) {
            cVar5 = '\x04';
            param_1[1] = bVar2;
            goto LAB_013c7ee8;
          }
          iVar10 = 1;
        }
      }
    }
    if (iVar10 != 1) {
      if (iVar10 == 2) {
        if (uVar9 < 2) {
          cVar5 = '\0';
          param_1[4] = '\0';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          param_1[8] = '\x02';
          param_1[9] = '\0';
          param_1[10] = '\0';
          param_1[0xb] = '\0';
LAB_013c7ee8:
          *param_1 = cVar5;
          return;
        }
        bVar2 = *pbVar8;
        bVar3 = pbVar8[1];
        param_2[2] = (int)(pbVar8 + 2);
        param_2[3] = uVar9 - 2;
        uVar4 = (bVar2 & 0x3f) << 0x18 | (uint)bVar3 << 0x10;
        uVar1 = uVar4 >> 0x10;
        if (uVar6 <= uVar4 >> 0x10) {
          *(short *)(param_1 + 2) = (short)(uVar4 >> 0x10);
          cVar5 = '\x02';
          *(uint *)(param_1 + 4) = uVar13 - uVar9;
          goto LAB_013c7ed0;
        }
        if (uVar13 < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar1,uVar13,uVar13,&DAT_01cf25f4);
        }
        local_40 = *param_2;
        local_34 = uVar13 - uVar1;
        local_38 = local_40 + uVar1;
        local_3c = uVar13;
        FUN_013c7c70(local_30,&local_40,param_3,1,uVar6);
        if (local_30[0] != '\a') {
          FUN_01bed4e2(param_1 + 1,(uint)local_30 | 1,0xb);
          *param_1 = local_30[0];
          return;
        }
      }
      else {
        if (uVar9 == 0) {
LAB_013c7eac:
          cVar5 = '\0';
          goto LAB_013c7ed0;
        }
        param_2[2] = (int)(pbVar8 + 1);
        param_2[3] = uVar9 - 1;
      }
      if (param_3[0x12] == 1) {
        uVar6 = *(uint *)(param_3 + 0x18);
      }
      else {
        uVar6 = (uint)(ushort)param_3[0x13];
      }
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      if (*param_3 == 1) {
        uVar9 = *(uint *)(param_3 + 6);
      }
      else {
        uVar9 = (uint)(ushort)param_3[1];
      }
      if (uVar9 + uVar6 < 0xff) {
        cVar5 = '\a';
        goto LAB_013c7ed0;
      }
      *(uint *)(param_1 + 4) = uVar9 + uVar6;
      goto LAB_013c7ea4;
    }
    cVar5 = '\0';
    if (uVar9 == 0) {
LAB_013c7f0c:
      *(byte **)(param_1 + 4) = unaff_lr;
      *(byte **)(param_1 + 8) = in_r12;
      goto LAB_013c7ed0;
    }
    pbVar7 = (byte *)(uVar9 - 1);
    pbVar11 = pbVar8 + 1;
    pbVar12 = (byte *)(uint)*pbVar8;
    param_2[2] = (int)pbVar11;
    param_2[3] = (int)pbVar7;
    if (pbVar7 < pbVar12) goto LAB_013c7f0c;
    uVar9 = (int)pbVar7 - (int)pbVar12;
    pbVar8 = pbVar11 + (int)pbVar12;
    param_2[2] = (int)pbVar8;
    param_2[3] = uVar9;
    if (&DAT_0000003f < pbVar12) {
      cVar5 = '\x03';
      unaff_lr = pbVar12;
      goto LAB_013c7f0c;
    }
    local_40 = FUN_013c7f34(param_3,pbVar11,pbVar12);
    in_r12 = pbVar12;
    unaff_lr = pbVar11;
  } while (local_40 == 0);
  FUN_013f6af8(&local_40);
  *(byte **)(param_1 + 4) = pbVar12;
LAB_013c7ea4:
  cVar5 = '\x05';
LAB_013c7ed0:
  *param_1 = cVar5;
  return;
}

