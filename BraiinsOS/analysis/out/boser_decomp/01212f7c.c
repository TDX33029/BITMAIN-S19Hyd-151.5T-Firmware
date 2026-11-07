// FUN_01212f7c @ 01212f7c size=652 calls_out=8 calls_in=0
// strings: 

bool FUN_01212f7c(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  uint *puVar6;
  uint extraout_r2;
  int extraout_r3;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined8 uVar10;
  
  iVar3 = FUN_01ab095c(param_1 + 800);
  uVar5 = 0;
  if (iVar3 != 0) {
    uVar9 = *(uint *)(param_2 + 8);
    if ((*(char *)(param_1 + 0x318) == '\0') || (uVar9 < *(uint *)(param_1 + 0x314))) {
LAB_012130c8:
      uVar5 = 0;
      if (*(uint *)(param_1 + 0x1c8) <= uVar9) {
        uVar5 = FUN_01ab095c(param_1 + 0xe0,param_2);
      }
    }
    else {
      if ((*(byte *)(param_2 + 0x3c) & 2) != 0) {
        uVar4 = *(uint *)(param_1 + 0x30);
        puVar8 = (uint *)(param_1 + 0x30);
        if (uVar4 < 0x3ffffffe) {
          uVar5 = *puVar8;
          if (uVar5 != uVar4) {
            ClearExclusiveLocal();
            goto LAB_012131e4;
          }
          bVar2 = (bool)hasExclusiveAccess(puVar8);
          if (bVar2) {
            *puVar8 = uVar4 + 1;
          }
          uVar5 = (uint)!bVar2;
          if (uVar5 != 0) goto LAB_012131e4;
          DataMemoryBarrier(0xb);
        }
        else {
LAB_012131e4:
          FUN_0197a5c8(puVar8,uVar5);
        }
        if (*(char *)(param_1 + 0x38) == '\0') {
          iVar3 = FUN_01ab9098(param_1 + 0x40,*(undefined4 *)(param_2 + 0x24),
                               *(undefined4 *)(param_2 + 0x28));
          DataMemoryBarrier(0xb);
          do {
            uVar5 = *puVar8;
            bVar2 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar2);
          *puVar8 = uVar5 - 1;
          if ((uVar5 - 1 & 0xbfffffff) == 0x80000000) {
            FUN_019a33c4(puVar8);
          }
          uVar5 = 1;
          if (iVar3 != 0) goto LAB_012130e8;
        }
        else {
          DataMemoryBarrier(0xb);
          do {
            uVar5 = *puVar8 - 1;
            bVar2 = (bool)hasExclusiveAccess(puVar8);
          } while (!bVar2);
          *puVar8 = uVar5;
          if ((uVar5 & 0xbfffffff) == 0x80000000) {
            FUN_019a33c4(puVar8);
            uVar5 = extraout_r1;
          }
        }
      }
      puVar8 = (uint *)FUN_01ac25d8(param_1 + 0x60,uVar5);
      uVar5 = *puVar8;
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0130701c(&DAT_01c25364);
      }
      iVar3 = puVar8[3] << 2;
      *puVar8 = uVar5 + 1;
      puVar6 = (uint *)puVar8[2];
      do {
        if (iVar3 == 0) {
          uVar9 = *(uint *)(param_2 + 8);
          *puVar8 = uVar5;
          goto LAB_012130c8;
        }
        uVar4 = *puVar6;
        iVar3 = iVar3 + -4;
        puVar6 = puVar6 + 1;
      } while (uVar9 < uVar4);
      *puVar8 = uVar5;
      uVar5 = 1;
    }
  }
LAB_012130e8:
  uVar4 = *(uint *)(param_1 + 0x47c);
  uVar10 = thunk_FUN_01bee35a(0x478,uVar5,*(undefined4 *)(param_1 + 0x478),0x60);
  puVar8 = (uint *)((int)uVar10 + extraout_r3);
  uVar5 = *puVar8;
  uVar9 = puVar8[1];
  if ((extraout_r2 & uVar4) != 0xffffffff) {
    if ((int)((ulonglong)uVar10 >> 0x20) == 0) {
      uVar5 = uVar5 | extraout_r2;
      uVar9 = uVar9 | uVar4;
    }
    else {
      uVar5 = uVar5 & ~extraout_r2;
      uVar9 = uVar9 & ~uVar4;
    }
  }
  *puVar8 = uVar5;
  puVar8[1] = uVar9;
  iVar3 = FUN_01ab095c(param_1 + 0x7a0,param_2);
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x8f8);
    uVar7 = *(uint *)(param_1 + 0x8fc);
    uVar9 = *puVar8;
    uVar5 = puVar8[1];
    if (uVar4 == 0xffffffff && uVar7 == 0xffffffff) goto LAB_012131b4;
  }
  else {
    iVar3 = FUN_01267898(param_1 + 0x480,param_2);
    uVar4 = *(uint *)(param_1 + 0x8f8);
    uVar7 = *(uint *)(param_1 + 0x8fc);
    uVar9 = *puVar8;
    uVar5 = puVar8[1];
    if (uVar4 == 0xffffffff && uVar7 == 0xffffffff) goto LAB_012131b4;
    if (iVar3 != 0) {
      uVar9 = uVar9 & ~uVar4;
      uVar5 = uVar5 & ~uVar7;
      goto LAB_012131b4;
    }
  }
  uVar9 = uVar9 | uVar4;
  uVar5 = uVar5 | uVar7;
LAB_012131b4:
  cVar1 = *(char *)(param_1 + 0x98c);
  *puVar8 = uVar9;
  puVar8[1] = uVar5;
  return cVar1 == '\0' || (uVar9 != 0xffffffff || uVar5 != 0xffffffff);
}

