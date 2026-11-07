// FUN_013470e8 @ 013470e8 size=1092 calls_out=10 calls_in=1
// strings: 

void FUN_013470e8(uint *param_1,char *param_2,char *param_3,uint param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int local_90;
  undefined4 local_8c;
  char *local_88;
  uint uStack_84;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined1 local_74;
  uint local_70;
  uint local_6c;
  undefined2 local_68;
  int local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (param_4 == 0) {
    do {
      iVar7 = *param_5;
      bVar3 = (bool)hasExclusiveAccess(param_5);
    } while (!bVar3);
    *param_5 = iVar7 + 1;
    if (-1 < iVar7) {
LAB_01347198:
      *param_1 = 0x8000000a;
      param_1[1] = (uint)param_2;
      param_1[2] = (uint)param_5;
      return;
    }
  }
  else {
    if (*param_3 != '/') {
      *param_1 = 0x8000000a;
      param_1[1] = 0;
      return;
    }
    do {
      iVar7 = *param_5;
      bVar3 = (bool)hasExclusiveAccess(param_5);
    } while (!bVar3);
    *param_5 = iVar7 + 1;
    if (-1 < iVar7) {
      local_64 = 1;
      local_68 = 1;
      local_74 = 1;
      local_70 = 0;
      local_80 = 0;
      local_8c = 0x2f;
      local_78 = 0x2f;
      local_88 = param_3;
      uStack_84 = param_4;
      local_7c = param_4;
      local_6c = param_4;
      do {
        pcVar4 = local_88;
        if (local_64 == 0) {
          pcVar9 = (char *)0x0;
          if (local_68._1_1_ == '\0') {
            FUN_0062a644(&local_60,&local_8c);
            if (local_60 == 1) {
              pcVar9 = pcVar4 + local_70;
              local_70 = local_58;
            }
            else {
              pcVar9 = (char *)0x0;
              if (local_68._1_1_ != '\0') goto LAB_01347198;
              local_68 = CONCAT11(1,(char)local_68);
              if (((char)local_68 == '\x01') || (local_6c != local_70)) {
                pcVar9 = local_88 + local_70;
              }
            }
          }
        }
        else {
          local_64 = 0;
          iVar7 = FUN_013478c0(&local_8c);
          if (iVar7 != 0) goto LAB_01347198;
          pcVar9 = (char *)FUN_01347950(&local_8c);
        }
        if (pcVar9 == (char *)0x0) goto LAB_01347198;
        FUN_01350f80(&local_60);
        uVar10 = local_58;
        piVar6 = local_5c;
        uVar5 = local_60;
        uVar17 = FUN_013528d4(param_7,param_2);
        piVar12 = param_5;
        if ((int)uVar17 != 0) {
          FUN_01344bb8(&local_60,param_5,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20),param_6);
          piVar12 = local_5c;
          if (local_60 != 0x8000000a) {
            param_1[2] = local_58;
            param_1[3] = uStack_54;
            param_1[4] = uStack_50;
            param_1[5] = uStack_4c;
            param_1[6] = uStack_48;
            param_1[7] = uStack_44;
            param_1[8] = local_40;
            param_1[9] = uStack_3c;
            param_1[10] = uStack_38;
            param_1[0xb] = uStack_34;
            param_1[0xc] = uStack_30;
            param_1[0xd] = uStack_2c;
            *param_1 = local_60;
            param_1[1] = (uint)local_5c;
            piVar12 = param_5;
            goto joined_r0x01347518;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *param_5;
            bVar3 = (bool)hasExclusiveAccess(param_5);
          } while (!bVar3);
          *param_5 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_013532e4(param_5);
          }
        }
        if (*param_2 == '\x04') {
          uVar18 = FUN_01344a90(piVar6,uVar10);
          uVar10 = (uint)(uVar18 >> 0x20);
          if (((uVar18 & 1) == 0) || (*(uint *)(param_2 + 0xc) <= uVar10)) goto LAB_0134748c;
          param_2 = (char *)(*(int *)(param_2 + 8) + uVar10 * 0x18);
        }
        else {
          if ((*param_2 != '\x05') || (iVar7 = *(int *)(param_2 + 4), iVar7 == 0)) {
LAB_0134748c:
            *param_1 = 0x8000000a;
            param_1[1] = 0;
joined_r0x01347518:
            if ((uVar5 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(piVar6);
            }
            DataMemoryBarrier(0xb);
            do {
              iVar7 = *piVar12;
              bVar3 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar3);
            *piVar12 = iVar7 + -1;
            if (iVar7 == 1) {
              DataMemoryBarrier(0xb);
              FUN_013532e4(piVar12);
              return;
            }
            return;
          }
          local_90 = *(int *)(param_2 + 8);
          while( true ) {
            iVar14 = iVar7 + 0x10c;
            uVar2 = *(ushort *)(iVar7 + 0x192);
            uVar16 = 0xffffffff;
            iVar15 = (uint)uVar2 * 0xc;
            do {
              uVar11 = (uint)uVar2;
              if (iVar15 == 0) goto joined_r0x013473c0;
              uVar13 = *(uint *)(iVar14 + 8);
              uVar11 = uVar13;
              if (uVar10 < uVar13) {
                uVar11 = uVar10;
              }
              iVar8 = FUN_016dd50a(piVar6,*(undefined4 *)(iVar14 + 4),uVar11);
              if (iVar8 == 0) {
                iVar8 = uVar10 - uVar13;
              }
              iVar15 = iVar15 + -0xc;
              uVar16 = uVar16 + 1;
              iVar14 = iVar14 + 0xc;
            } while ((char)((0 < iVar8) - (iVar8 < 0)) == '\x01');
            uVar11 = uVar16;
            if (0 < iVar8 == iVar8 < 0) break;
joined_r0x013473c0:
            if (local_90 == 0) goto LAB_0134748c;
            local_90 = local_90 + -1;
            iVar7 = *(int *)(iVar7 + uVar11 * 4 + 0x198);
          }
          param_2 = (char *)(iVar7 + uVar16 * 0x18);
        }
        if ((uVar5 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(piVar6);
        }
        param_5 = piVar12;
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1347528);
  (*pcVar1)();
}

