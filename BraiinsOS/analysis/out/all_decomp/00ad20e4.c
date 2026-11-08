// FUN_00ad20e4 @ 00ad20e4 size=156 calls_out=0 calls_in=7
// strings: 

void FUN_00ad20e4(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar7 = *param_1;
  iVar6 = 5;
  if (6 < uVar7) {
    iVar6 = uVar7 - 7;
  }
  switch(iVar6) {
  case 0:
  case 1:
  case 2:
    goto switchD_00ad2104_caseD_0;
  default:
                    /* WARNING: Could not recover jumptable at 0x00ad2130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)param_1[1])();
    return;
  case 4:
    if (param_1[1] != 0) {
      uVar7 = param_1[2];
      if (uVar7 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar14 = *(byte *)(uVar7 - 3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)(uVar7 - 3) >> 5);
      iVar13 = *(int *)(iVar6 + 8) + 0x10;
      iVar11 = iVar8 * uVar14 + iVar8 + -4;
      iVar8 = iVar13 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if (iVar8 - uVar7 < uVar10) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar6 + 0x14);
      uVar10 = 1 << uVar14;
      *(undefined1 *)(uVar7 - 3) = 0xff;
      *(undefined2 *)(uVar7 - 2) = 0;
      do {
        uVar12 = *(uint *)(iVar6 + 0x10);
        uVar7 = *(uint *)(iVar6 + 0xc) | uVar12;
        if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar14);
          FUN_016dddc0(&DAT_018ddd48);
          if (iStack_24 == 0) {
            return;
          }
          puVar4 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar4;
          FUN_016d6ac4(uStack_28,iStack_24);
          *puVar4 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar15 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar15);
          uVar7 = *puVar15;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar15);
        } while (!bVar3);
        *puVar15 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
switchD_00ad2104_caseD_0:
    return;
  case 5:
    if (uVar7 == 0) {
      bVar2 = (byte)param_1[2];
      cVar5 = bVar2 - 4;
      if (bVar2 < 4) {
        cVar5 = '\x04';
      }
      iVar6 = 0xc;
      if ((cVar5 != '\x05') && (cVar5 != '\x04' || bVar2 != 3)) {
        return;
      }
    }
    else {
      iVar6 = 4;
      if (uVar7 != 2) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00ad2154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)((int)param_1 + iVar6))();
    return;
  }
}

