// FUN_015fd1c8 @ 015fd1c8 size=792 calls_out=8 calls_in=3
// strings: 

void FUN_015fd1c8(undefined4 *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *unaff_r6;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 *unaff_r9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  byte *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  uint local_40;
  byte *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  int local_2c;
  undefined1 *local_28;
  
  uVar13 = CONCAT44(param_3,param_2);
  if (param_3 == (undefined1 *)0x3) {
    iVar7 = 3;
    puVar10 = &DAT_0050da9f;
    iVar1 = thunk_FUN_01bed842(param_2,&DAT_0050da9f,3);
    if (iVar1 != 0) goto LAB_015fd208;
    local_54 = (undefined1 *)0x0;
    local_40 = 0x80000002;
    puVar5 = (undefined1 *)0x1;
    local_50 = 0;
    local_58 = 0;
    uVar9 = 0;
    uVar2 = 0;
    uVar12 = 0;
    uVar4 = 0;
    local_3c = unaff_r6;
  }
  else {
LAB_015fd208:
    local_48 = param_3 + param_2;
    uVar4 = 0;
    puVar10 = (undefined1 *)0x0;
    do {
      puVar5 = puVar10;
      if (param_3 == puVar5) {
        uVar2 = 0;
        pbVar6 = (byte *)0x0;
        goto LAB_015fd2dc;
      }
      uVar2 = (uint)(byte)puVar5[param_2];
      puVar10 = puVar5 + 1;
    } while (""[uVar2] != '\0');
    pbVar6 = &DAT_00000003;
    if ((uVar2 != 0x2f) || (puVar5 == (undefined1 *)0x0)) {
      local_48 = puVar5;
LAB_015fd2dc:
      local_50 = 2;
      param_1[1] = uVar4 | uVar2 << 8 | (uint)pbVar6 & 0xff;
      param_1[2] = local_48;
      goto LAB_015fd3f4;
    }
    uVar11 = 0;
    if (puVar10 + param_2 == local_48) {
      local_50 = 0;
    }
    else {
      local_50 = 0;
      puVar8 = puVar10;
      do {
        local_44 = puVar8 + 1;
        pbVar6 = puVar8 + param_2;
        uVar2 = (uint)*pbVar6;
        if (uVar2 == 0x2b) {
          if (puVar8 <= puVar10) goto LAB_015fd2b0;
          local_50 = 1;
          unaff_r9 = puVar8;
        }
        else {
          if ((uVar2 == 0x3b) && (puVar10 < puVar8)) {
            local_4c = pbVar6 + 1;
            FUN_015fd514(&local_40,param_2,param_3,&local_4c,puVar8);
            if (local_40 == 0x80000003) {
              uVar2 = ((uint)local_3c & 0xffff) >> 8;
              uVar4 = (uint)local_3c & 0xffff0000;
              pbVar6 = local_3c;
              local_48 = local_38;
              goto LAB_015fd2dc;
            }
            local_58 = local_34;
            uVar4 = 1;
            if ((int)local_40 < 0) {
              uVar4 = local_40 ^ 0x80000000;
            }
            local_54 = local_38;
            if (uVar4 == 2) {
              uVar13 = FUN_015fdacc(param_2,param_3,puVar8);
LAB_015fd4bc:
              FUN_015fde00(&local_30,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
            }
            else {
              if (uVar4 != 1) goto LAB_015fd4bc;
              FUN_015fdb14(&local_30,param_2,param_3,local_34,local_3c,local_38);
            }
            param_3 = local_28;
            puVar10 = local_30;
            goto LAB_015fd38c;
          }
LAB_015fd2b0:
          pbVar6 = (byte *)(uint)(byte)""[uVar2];
          if (pbVar6 == (byte *)0x0) {
            uVar4 = 0;
            pbVar6 = &DAT_00000003;
            local_48 = puVar8;
            goto LAB_015fd2dc;
          }
        }
        puVar8 = local_44;
      } while (param_3 != local_44);
    }
    if ((int)param_3 < 0) {
LAB_015fd32c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,param_3);
    }
    uVar11 = 1;
    iVar7 = FUN_01298504(param_3,1);
    if (iVar7 == 0) goto LAB_015fd32c;
    FUN_01bed4e2(iVar7,param_2,param_3);
    puVar10 = (undefined1 *)0x0;
    do {
      bVar3 = puVar10[iVar7];
      if (bVar3 - 0x41 < 0x1a) {
        bVar3 = bVar3 | 0x20;
      }
      puVar10[iVar7] = bVar3;
      puVar10 = puVar10 + 1;
    } while (param_3 != puVar10);
    local_40 = 0x80000002;
    local_3c = pbVar6;
    local_2c = iVar7;
    puVar10 = param_3;
LAB_015fd38c:
    uVar2 = (uint)unaff_r9 & 0xff;
    uVar12 = (uint)unaff_r9 & 0xff00;
    uVar4 = (uint)unaff_r9 & 0xffff0000;
    uVar9 = 1;
    iVar7 = local_2c;
  }
  param_1[2] = local_40;
  param_1[5] = local_58;
  param_1[4] = local_54;
  param_1[1] = uVar4 | uVar12 | uVar2;
  *(undefined1 *)(param_1 + 6) = uVar9;
  param_1[3] = local_3c;
  param_1[7] = puVar10;
  param_1[8] = iVar7;
  param_1[9] = param_3;
  param_1[10] = puVar5;
  *(undefined2 *)((int)param_1 + 0x19) = 1;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
LAB_015fd3f4:
  *param_1 = local_50;
  return;
}

