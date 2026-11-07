// FUN_015eca48 @ 015eca48 size=1040 calls_out=16 calls_in=1
// strings: internal error: entered unreachable code

uint FUN_015eca48(int param_1,uint param_2)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined *puVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  FUN_01656cb0(&local_38,param_1 + 8);
  if (local_38 == 1) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cfd928,&DAT_01cfd9e0);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar12 = local_34 + 8;
    if (*(int *)(local_34 + 0x24) != 0) {
      while (uVar14 = FUN_015ef9a8(local_34 + 0x18), iVar7 = (int)((ulonglong)uVar14 >> 0x20),
            piVar13 = (int *)uVar14, piVar13 != (int *)0x0) {
        uVar9 = *(uint *)(iVar7 + 8);
        uVar5 = uVar9;
        if (uVar9 < 5) {
          uVar5 = 4;
        }
        iVar8 = (int)piVar13 + (uVar5 - 1 & 0xfffffff8) + 8;
        uVar14 = FUN_015e9908(iVar8);
        uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
        if ((uVar5 & 0xff) != 2) {
          *(char *)((int)uVar14 + 5) = (char)param_2;
          FUN_00a97e8c((int)uVar14,uVar5 & 1,LZCOUNT(piVar13));
          FUN_00a97e8c(local_34,local_30);
          (**(code **)(iVar7 + 0xc))(iVar8 + (uVar9 - 1 & 0xfffffff4) + 0xc);
LAB_015ecbfc:
          DataMemoryBarrier(0xb);
          do {
            iVar12 = *piVar13;
            bVar4 = (bool)hasExclusiveAccess(piVar13);
          } while (!bVar4);
          *piVar13 = iVar12 + -1;
          iVar8 = 3;
          if (iVar12 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015fa720(piVar13,iVar7);
          }
          goto LAB_015ecc30;
        }
        iVar8 = (**(code **)(iVar7 + 0xc))(iVar8 + (uVar9 - 1 & 0xfffffff4) + 0xc);
        if (iVar8 == 0) {
          FUN_015efb58(iVar12,param_2);
          FUN_00a97e8c(local_34,local_30);
          goto LAB_015ecbfc;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar13;
          bVar4 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar4);
        *piVar13 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015fa720(piVar13,iVar7);
        }
      }
      FUN_015efb58(iVar12,param_2);
      FUN_00a97e8c(local_34,local_30);
      iVar8 = 3;
      goto LAB_015ecc30;
    }
    piVar13 = (int *)(local_34 + 0x2c);
    if ((*piVar13 != -0x80000000) && (*(uint *)(local_34 + 0x28) <= *(uint *)(local_34 + 0x14))) {
      uVar14 = thunk_FUN_01bee35a(*(uint *)(local_34 + 0x14),0x240);
      uVar5 = *(uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
      if (uVar5 < 3) {
        piVar10 = (int *)FUN_019b03e8();
      }
      else {
        piVar10 = (int *)(uVar5 - 8);
        do {
          iVar12 = *piVar10;
          bVar4 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar4);
        *piVar10 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_015ece60;
      }
      piVar6 = (int *)thunk_FUN_01be5118(0x18);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      iVar12 = 0;
      if (param_2 != 0) {
        iVar12 = 0x100;
      }
      *piVar6 = 1;
      piVar6[1] = 1;
      piVar6[3] = 0;
      piVar6[4] = iVar12;
      piVar6[5] = (int)piVar10;
      piVar10 = piVar6 + 2;
      *piVar10 = 1;
      if (*piVar13 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01cfd970);
      }
      do {
        iVar12 = *piVar6;
        bVar4 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar4);
      *piVar6 = iVar12 + 1;
      if (iVar12 < 0) {
LAB_015ece60:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x15ece60);
        (*pcVar1)();
      }
      FUN_015efd88(piVar13,piVar6,&DAT_01cfd958);
      FUN_00a97e8c(local_34,local_30);
      DataMemoryBarrier(0xb);
      if (*(char *)(param_1 + 0x4c) == '\0') {
        puVar11 = &DAT_01cfd9d0;
        do {
          uVar14 = FUN_015e9908(piVar10);
          uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((uVar5 & 0xff) == 2) goto LAB_015ece58;
          cVar2 = *(char *)((int)uVar14 + 5);
          FUN_00a97e8c((int)uVar14,uVar5 & 1);
          if (cVar2 == '\x02') break;
          FUN_019b37f8();
          DataMemoryBarrier(0xb);
        } while (*(char *)(param_1 + 0x4c) == '\0');
      }
      uVar14 = FUN_015e9908(piVar10);
      uVar5 = (uint)((ulonglong)uVar14 >> 0x20);
      iVar12 = (int)uVar14;
      if ((uVar5 & 0xff) == 2) {
        puVar11 = &DAT_01cfd9a0;
LAB_015ece58:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(puVar11);
      }
      bVar3 = *(byte *)(iVar12 + 5);
      *(undefined1 *)(iVar12 + 5) = 2;
      FUN_00a97e8c(iVar12,uVar5 & 1);
      iVar8 = 1;
      param_2 = bVar3 & 1;
      if (bVar3 == 2) {
        iVar8 = 3;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar6;
        bVar4 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar4);
      *piVar6 = iVar12 + -1;
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015fa864(piVar6);
      }
      goto LAB_015ecc30;
    }
    FUN_015efb58(iVar12,param_2);
    iVar8 = 3;
  }
  else {
    iVar8 = 1;
  }
  FUN_00a97e8c(local_34,local_30);
LAB_015ecc30:
  uVar5 = 2;
  if (iVar8 != 3) {
    if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cfd948);
    }
    uVar5 = param_2 & 1;
  }
  return uVar5;
}

