// FUN_00b37a80 @ 00b37a80 size=1488 calls_out=10 calls_in=1
// strings: 

void FUN_00b37a80(uint *param_1,uint *param_2,undefined4 param_3)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  short *psVar12;
  undefined4 *puVar13;
  bool bVar14;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  
  psVar12 = (short *)((int)param_2 + 0x2e);
  uVar4 = (undefined1)param_2[0xb];
  do {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar4) {
    case 0:
      uVar7 = (uint)*(byte *)((int)param_2 + 0x2d);
      uVar6 = uVar7;
      while (uVar6 < 10) {
        FUN_00b3807c(&local_30,param_3,(int)psVar12 + (uVar7 & 0xff),10 - (uVar7 & 0xff));
        if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) goto LAB_00b38044;
        uVar7 = *(byte *)((int)param_2 + 0x2d) + local_2c;
        *(char *)((int)param_2 + 0x2d) = (char)uVar7;
        uVar6 = uVar7 & 0xff;
      }
      if (*(char *)((int)param_2 + 0x2e) == '\x1f') {
        cVar2 = *(char *)((int)param_2 + 0x2f);
        bVar14 = cVar2 == -0x75;
        if (bVar14) {
          cVar2 = (char)param_2[0xc];
        }
        if (bVar14 && cVar2 == '\b') {
          bVar3 = *(byte *)((int)param_2 + 0x31);
          *(byte *)(param_2 + 0xe) = bVar3;
          if (bVar3 < 0x20) {
            puVar13 = (undefined4 *)0x0;
            param_2[9] = *(uint *)((int)param_2 + 0x32);
            *(undefined1 *)(param_2 + 10) = *(undefined1 *)((int)param_2 + 0x37);
            if ((bVar3 & 2) != 0) {
              puVar13 = (undefined4 *)thunk_FUN_01be5118(0x18);
              if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0066439c(8,0x18);
              }
              iVar8 = 0;
              puVar13[4] = 10;
              *puVar13 = 10;
              puVar13[1] = 0;
              uVar7 = 0xffffffff;
              do {
                pbVar1 = (byte *)((int)psVar12 + iVar8);
                iVar8 = iVar8 + 1;
                uVar7 = *(uint *)(&DAT_0042cd24 + ((*pbVar1 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
              } while (iVar8 != 10);
              puVar13[2] = ~uVar7;
            }
            FUN_00b3810c((char)param_2[0xb],param_2[0xc]);
            uVar4 = 1;
            param_2[0xb] = 1;
            param_2[0xc] = (uint)puVar13;
            break;
          }
        }
      }
      uVar11 = 0x13;
      puVar9 = &DAT_00450ebb;
LAB_00b3800c:
      FUN_019a18a8(param_1,0x14,puVar9,uVar11);
      return;
    case 1:
      if ((param_2[0xe] & 4) == 0) {
        uVar7 = param_2[0xc];
        uVar4 = 3;
      }
      else {
        uVar7 = (uint)*(byte *)((int)param_2 + 0x2d);
        uVar6 = uVar7;
        while (uVar6 < 2) {
          FUN_00b3807c(&local_30,param_3,(int)psVar12 + (uVar7 & 0xff),2 - (uVar7 & 0xff));
          if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) goto LAB_00b38044;
          uVar7 = *(byte *)((int)param_2 + 0x2d) + local_2c;
          *(char *)((int)param_2 + 0x2d) = (char)uVar7;
          uVar6 = uVar7 & 0xff;
        }
        puVar5 = (uint *)param_2[0xc];
        if (puVar5 != (uint *)0x0) {
          uVar7 = *puVar5;
          puVar5[4] = puVar5[4] + 2;
          *puVar5 = uVar7 + 2;
          puVar5[1] = puVar5[1] + (uint)(0xfffffffd < uVar7);
          uVar7 = ~puVar5[2];
          iVar8 = 0;
          do {
            pbVar1 = (byte *)((int)psVar12 + iVar8);
            iVar8 = iVar8 + 1;
            uVar7 = *(uint *)(&DAT_0042cd24 + ((*pbVar1 ^ uVar7) & 0xff) * 4) ^ uVar7 >> 8;
          } while (iVar8 != 2);
          puVar5[2] = ~uVar7;
        }
        FUN_013184d8(&local_30,*(undefined2 *)((int)param_2 + 0x2e));
        if (*param_2 != 0x80000000) {
          FUN_019bb7e0(*param_2,param_2[1]);
        }
        *param_2 = local_30;
        param_2[1] = local_2c;
        param_2[2] = uStack_28;
        *(undefined2 *)((int)param_2 + 0x2e) = 0;
        uVar4 = 2;
        uVar7 = param_2[0xc];
      }
      *(undefined1 *)(param_2 + 0xb) = uVar4;
      param_2[0xc] = uVar7;
      break;
    case 2:
      if (*param_2 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c12958);
      }
      uVar6 = param_2[2];
      for (uVar7 = (uint)*(ushort *)((int)param_2 + 0x2e); uVar7 < uVar6; uVar7 = uVar7 & 0xffff) {
        FUN_00b3807c(&local_30,param_3,param_2[1] + uVar7,uVar6 - uVar7);
        if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) goto LAB_00b38044;
        uVar6 = param_2[2];
        uVar7 = *(ushort *)((int)param_2 + 0x2e) + local_2c;
        *(short *)((int)param_2 + 0x2e) = (short)uVar7;
      }
      uVar7 = param_2[0xc];
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar10 = param_2[1];
        *(uint *)(uVar7 + 0x10) = *(int *)(uVar7 + 0x10) + uVar6;
        FUN_0130a5b0(uVar7,uVar10);
        uVar7 = param_2[0xc];
      }
      param_2[0xc] = uVar7;
      uVar4 = 3;
      *(undefined1 *)(param_2 + 0xb) = 3;
      break;
    case 3:
      if ((param_2[0xe] & 8) != 0) {
        if (param_2[3] == 0x80000000) {
          param_2[3] = 0;
          param_2[4] = 1;
          param_2[5] = 0;
        }
        FUN_00b37908(&local_30,param_3,param_2 + 3);
        if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
LAB_00b38044:
          *param_1 = local_30;
          param_1[1] = local_2c;
          return;
        }
        uVar7 = param_2[0xc];
        if (uVar7 != 0) {
          uVar6 = param_2[4];
          uVar10 = param_2[5];
          *(uint *)(uVar7 + 0x10) = *(int *)(uVar7 + 0x10) + uVar10;
          FUN_0130a5b0(uVar7,uVar6,uVar10);
          puVar5 = (uint *)param_2[0xc];
          uVar7 = *puVar5;
          uVar6 = *(uint *)(&DAT_0042cd24 + (~puVar5[2] & 0xff) * 4);
          puVar5[4] = puVar5[4] + 1;
          *puVar5 = uVar7 + 1;
          puVar5[1] = puVar5[1] + (uint)(0xfffffffe < uVar7);
          puVar5[2] = ~(uVar6 ^ ~puVar5[2] >> 8);
        }
      }
      uVar4 = 4;
      *(undefined1 *)(param_2 + 0xb) = 4;
      break;
    case 4:
      if ((param_2[0xe] & 0x10) != 0) {
        if (param_2[6] == 0x80000000) {
          param_2[6] = 0;
          param_2[7] = 1;
          param_2[8] = 0;
        }
        FUN_00b37908(&local_30,param_3,param_2 + 6);
        if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) goto LAB_00b38044;
        uVar7 = param_2[0xc];
        if (uVar7 != 0) {
          uVar6 = param_2[7];
          uVar10 = param_2[8];
          *(uint *)(uVar7 + 0x10) = *(int *)(uVar7 + 0x10) + uVar10;
          FUN_0130a5b0(uVar7,uVar6,uVar10);
          puVar5 = (uint *)param_2[0xc];
          uVar7 = *puVar5;
          uVar6 = *(uint *)(&DAT_0042cd24 + (~puVar5[2] & 0xff) * 4);
          puVar5[4] = puVar5[4] + 1;
          *puVar5 = uVar7 + 1;
          puVar5[1] = puVar5[1] + (uint)(0xfffffffe < uVar7);
          puVar5[2] = ~(uVar6 ^ ~puVar5[2] >> 8);
        }
      }
      uVar4 = 5;
      param_2[0xb] = 5;
      break;
    case 5:
      uVar7 = param_2[0xc];
      if (uVar7 == 0) {
        uVar4 = 5;
        uVar7 = 0;
      }
      else {
        uVar6 = (uint)*(byte *)((int)param_2 + 0x2d);
        if (uVar6 < 2) {
          do {
            FUN_00b3807c(&local_30,param_3,(int)psVar12 + (uVar6 & 0xff),2 - (uVar6 & 0xff));
            if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) goto LAB_00b38044;
            uVar6 = *(byte *)((int)param_2 + 0x2d) + local_2c;
            *(char *)((int)param_2 + 0x2d) = (char)uVar6;
          } while ((uVar6 & 0xff) < 2);
          uVar7 = param_2[0xc];
        }
        if (*psVar12 != *(short *)(uVar7 + 8)) {
          uVar11 = 0x35;
          puVar9 = &DAT_00450ece;
          goto LAB_00b3800c;
        }
        uVar4 = (undefined1)param_2[0xb];
      }
      FUN_00b3810c(uVar4,uVar7);
      uVar4 = 6;
      *(undefined1 *)(param_2 + 0xb) = 6;
      break;
    case 6:
      *(undefined1 *)param_1 = 4;
      return;
    }
  } while( true );
}

