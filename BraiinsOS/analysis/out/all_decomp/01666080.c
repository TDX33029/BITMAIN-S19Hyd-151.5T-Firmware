// FUN_01666080 @ 01666080 size=824 calls_out=10 calls_in=3
// strings: Unable to decode input as UTF8

void FUN_01666080(int *param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  uVar8 = param_2[1];
  uVar7 = param_3[1];
  uVar12 = uVar8 + 1;
  uVar11 = *param_2;
  if (uVar8 == 0xffffffff) {
    uVar12 = 0xffffffff;
  }
  uVar5 = uVar12;
  if (uVar7 < uVar12) {
    uVar5 = uVar7;
  }
  if (uVar5 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,uVar5,uVar7,&DAT_018ad5c4);
  }
  bVar2 = (byte)param_2[2];
  do {
    if (uVar5 != uVar11) {
      iVar9 = 0;
      do {
        if (*(char *)(*param_3 + uVar11 + iVar9) == '\n') {
          if ((bVar2 & 1) == 0) {
            iVar10 = 0;
            *param_2 = 0;
            FUN_00f5f8dc(&local_34,param_3,uVar11 + iVar9 + 1);
            if (local_30 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,0xffffffff,0,&DAT_018ad5b4);
            }
            if ((int)local_30 + -1 != 0) {
              iVar10 = (int)local_30 + -1;
              if (*(char *)((int)local_34 + (int)local_30 + -2) == '\r') {
                iVar10 = (int)local_30 + -2;
              }
            }
            FUN_00fab1e0(&local_40,local_34,iVar10);
            if (local_40 == 1) {
              FUN_015e79d4(&local_48,0x15,"Unable to decode input as UTF8",0x1e);
              *param_1 = -0x7fffffff;
              param_1[1] = local_48;
              param_1[2] = local_44;
              pcVar3 = local_28;
            }
            else {
              if (local_38 < 0) {
                uVar4 = 0;
LAB_01666298:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar4,local_38);
              }
              if (local_38 == 0) {
                iVar10 = 1;
                iVar9 = 0;
              }
              else {
                iVar10 = thunk_FUN_016d4a50(local_38);
                if (iVar10 == 0) {
                  uVar4 = 1;
                  goto LAB_01666298;
                }
                iVar9 = local_38;
              }
              FUN_016dd1aa(iVar10,local_3c,local_38);
              *param_1 = iVar9;
              param_1[1] = iVar10;
              param_1[2] = local_38;
              pcVar3 = local_28;
            }
            if (((uint)pcVar3 & 1) == 0) {
              piVar6 = (int *)((int)pcVar3 + 0x10);
              DataMemoryBarrier(0xb);
              do {
                iVar9 = *piVar6;
                bVar1 = (bool)hasExclusiveAccess(piVar6);
              } while (!bVar1);
              *piVar6 = iVar9 + -1;
              if (iVar9 != 1) {
                return;
              }
              DataMemoryBarrier(0xb);
              if (*(int *)pcVar3 != 0) {
                thunk_FUN_016d3fb4(*(int *)((int)pcVar3 + 4));
                thunk_FUN_016d3fb4(pcVar3);
                return;
              }
            }
            else {
              if ((int)local_2c + ((uint)pcVar3 >> 5) == 0) {
                return;
              }
              pcVar3 = (code *)((int)local_34 - ((uint)pcVar3 >> 5));
            }
            thunk_FUN_016d3fb4(pcVar3);
            return;
          }
          local_4c = uVar11 + iVar9 + 1;
          if (uVar7 < local_4c) {
            local_28 = FUN_007883b8;
            local_30 = FUN_007883b8;
            local_34 = &local_4c;
            local_2c = &local_40;
            local_40 = uVar7;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_34,&DAT_018ad5a4);
          }
          FUN_00f5f804(param_3);
          uVar7 = param_3[1];
          bVar2 = 0;
          *param_2 = 0;
          *(undefined1 *)(param_2 + 2) = 0;
          goto LAB_016660cc;
        }
        iVar9 = iVar9 + 1;
      } while (uVar5 - uVar11 != iVar9);
    }
    if ((bVar2 & 1) == 0) {
      if (uVar7 <= uVar8) {
        *param_2 = uVar5;
        *param_1 = -0x80000000;
        return;
      }
      *(undefined1 *)(param_1 + 1) = 4;
      *(undefined1 *)(param_2 + 2) = 1;
      iVar9 = -0x7fffffff;
      goto LAB_0166619c;
    }
    FUN_00f5f804(param_3);
    uVar7 = param_3[1];
    bVar2 = 1;
    *param_2 = 0;
    if (uVar7 == 0) {
      iVar9 = -0x80000000;
LAB_0166619c:
      *param_1 = iVar9;
      return;
    }
LAB_016660cc:
    uVar5 = uVar12;
    if (uVar7 < uVar12) {
      uVar5 = uVar7;
    }
    uVar11 = 0;
  } while( true );
}

