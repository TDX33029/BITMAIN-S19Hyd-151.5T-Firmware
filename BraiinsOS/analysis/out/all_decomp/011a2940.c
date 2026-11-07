// FUN_011a2940 @ 011a2940 size=872 calls_out=8 calls_in=1
// strings: 

void FUN_011a2940(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 extraout_s1;
  double dVar13;
  undefined8 uVar14;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 *local_98;
  undefined2 local_94;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_60;
  char *local_5c;
  int *local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  if (param_2 == 0) {
LAB_011a2a50:
    *param_1 = 2;
    return;
  }
  do {
    iVar12 = param_2 + 0x10c;
    uVar2 = *(ushort *)(param_2 + 0x192);
    uVar10 = 0xffffffff;
    iVar11 = (uint)uVar2 * 0xc;
    do {
      if (iVar11 == 0) {
        uVar10 = (uint)uVar2;
        goto LAB_011a29f0;
      }
      uVar9 = *(uint *)(iVar12 + 8);
      uVar6 = uVar9;
      if (10 < uVar9) {
        uVar6 = 0xb;
      }
      iVar4 = FUN_016dd50a(param_6,*(undefined4 *)(iVar12 + 4),uVar6);
      if (iVar4 == 0) {
        iVar4 = 0xb - uVar9;
      }
      iVar11 = iVar11 + -0xc;
      uVar10 = uVar10 + 1;
      iVar12 = iVar12 + 0xc;
    } while ((char)((0 < iVar4) - (iVar4 < 0)) == '\x01');
    if (0 < iVar4 == iVar4 < 0) {
      local_5c = (char *)(param_2 + uVar10 * 0x18);
      if (*local_5c == '\x02') {
        if (*(int *)(local_5c + 8) != 2) {
          if (*(int *)(local_5c + 8) == 0) {
            uVar7 = *(undefined4 *)(local_5c + 0x10);
            uVar8 = *(undefined4 *)(local_5c + 0x14);
            *param_1 = 0;
            param_1[2] = uVar7;
            param_1[3] = uVar8;
            return;
          }
          uStack_40 = FUN_0123ab30(param_4,param_5,param_6,0xb);
          piVar5 = (int *)uStack_40;
          do {
            iVar11 = *piVar5;
            bVar3 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar3);
          *piVar5 = iVar11 + 1;
          if (-1 < iVar11) {
            DataMemoryBarrier(0xb);
            if (DAT_018da8bc != 0) {
              FUN_0120d52c();
            }
            do {
              iVar11 = *DAT_018da8b4;
              bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
            } while (!bVar3);
            *DAT_018da8b4 = iVar11 + 1;
            if (iVar11 < 0) goto LAB_011a2ca8;
            local_48 = DAT_018da8b4;
            uStack_44 = DAT_018da8b8;
            local_60 = 6;
            local_88 = 0;
            local_84 = 0;
            local_80 = 0;
            local_7c = 0;
            local_90 = 2;
            local_98 = (undefined1 *)0x8000001e;
            local_b8 = 1;
            local_b4 = uStack_40;
            iVar11 = thunk_FUN_016d4a50(0x80);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x80);
            }
            goto LAB_011a2c64;
          }
          goto LAB_011a2ca8;
        }
        dVar13 = *(double *)(local_5c + 0x10);
        uVar7 = FUN_016d62a0(SUB84(dVar13,0));
        if ((double)CONCAT44(extraout_s1,uVar7) == dVar13) {
          *param_1 = 0;
          uVar14 = FUN_01845b18(SUB84(dVar13,0),(int)((ulonglong)dVar13 >> 0x20));
          if (dVar13 < 0.0) {
            uVar14 = 0;
          }
          if (1.844674407370955e+19 < dVar13) {
            uVar14 = 0xffffffffffffffff;
          }
          *(undefined8 *)(param_1 + 2) = uVar14;
          return;
        }
      }
      uStack_40 = FUN_0123ab30(param_4,param_5,param_6,0xb);
      piVar5 = (int *)uStack_40;
      do {
        iVar11 = *piVar5;
        bVar3 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar3);
      *piVar5 = iVar11 + 1;
      if (-1 < iVar11) {
        DataMemoryBarrier(0xb);
        if (DAT_018da8bc != 0) {
          FUN_0120d52c();
        }
        do {
          iVar11 = *DAT_018da8b4;
          bVar3 = (bool)hasExclusiveAccess(DAT_018da8b4);
        } while (!bVar3);
        *DAT_018da8b4 = iVar11 + 1;
        if (-1 < iVar11) {
          local_48 = DAT_018da8b4;
          uStack_44 = DAT_018da8b8;
          local_60 = 6;
          local_94 = 0x400;
          local_98 = &DAT_80000028;
          local_b8 = 1;
          local_b4 = uStack_40;
          iVar11 = thunk_FUN_016d4a50(0x80);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x80);
          }
LAB_011a2c64:
          FUN_016dd1aa(iVar11,&local_b8,0x80);
          *param_1 = 1;
          param_1[1] = iVar11;
          return;
        }
      }
LAB_011a2ca8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x11a2ca8);
      (*pcVar1)();
    }
LAB_011a29f0:
    if (param_3 == 0) goto LAB_011a2a50;
    param_3 = param_3 + -1;
    param_2 = *(int *)(param_2 + uVar10 * 4 + 0x198);
  } while( true );
}

