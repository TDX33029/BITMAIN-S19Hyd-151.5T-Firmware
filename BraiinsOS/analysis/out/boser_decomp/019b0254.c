// FUN_019b0254 @ 019b0254 size=328 calls_out=6 calls_in=11
// strings: 

int FUN_019b0254(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int extraout_r2;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 local_24 [3];
  
  uVar14 = thunk_FUN_01bee35a(param_1,0x240);
  uVar5 = *(uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
  if (uVar5 < 3) {
    if (uVar5 == 2) {
      uVar14 = thunk_FUN_01bee35a(2,0x238);
      puVar7 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
      uVar5 = *puVar7;
      uVar10 = puVar7[1];
      if (uVar5 == 0 && uVar10 == 0) {
        ClearExclusiveLocal();
        uVar11 = DAT_01d51ab8;
        uVar13 = DAT_01d51abc;
        do {
          uVar4 = DAT_01d51abc;
          uVar3 = DAT_01d51ab8;
          uVar5 = uVar11 + 1;
          uVar10 = uVar13 + (0xfffffffe < uVar11);
          if (CARRY4(uVar13,(uint)(0xfffffffe < uVar11))) {
            FUN_019a7340();
            goto LAB_019b0388;
          }
          if (DAT_01d51ab8 == uVar11 && DAT_01d51abc == uVar13) {
            bVar2 = (bool)hasExclusiveAccess(0x1d51ab8);
            if (bVar2) {
              DAT_01d51ab8 = uVar5;
              DAT_01d51abc = uVar10;
            }
            bVar12 = 0;
            if (bVar2) {
              bVar12 = 0xff;
            }
          }
          else {
            bVar12 = 0;
            ClearExclusiveLocal();
          }
          uVar11 = uVar3;
          uVar13 = uVar4;
        } while (!(bool)(bVar12 & 1));
        *puVar7 = uVar5;
        puVar7[1] = uVar10;
      }
      local_24[0] = 0x80000000;
      piVar9 = (int *)FUN_019b057c(uVar5,uVar10,local_24);
    }
    else {
      piVar9 = (int *)FUN_019b03e8();
    }
  }
  else {
    piVar9 = (int *)(uVar5 - 8);
    do {
      iVar6 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar6 + 1;
    if (iVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19b0294);
      (*pcVar1)();
    }
  }
  puVar8 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 1;
    puVar8[1] = 1;
    puVar8[2] = piVar9;
    puVar8[3] = 0;
    puVar8[4] = 0;
    uVar14 = thunk_FUN_01bee35a(puVar8,puVar8,0x18);
    iVar6 = (int)((ulonglong)uVar14 >> 0x20);
    *(int *)(iVar6 + 0x14) = (int)uVar14 + extraout_r2;
    return iVar6;
  }
LAB_019b0388:
                    /* WARNING: Subroutine does not return */
  FUN_0066439c(4,0x18);
}

