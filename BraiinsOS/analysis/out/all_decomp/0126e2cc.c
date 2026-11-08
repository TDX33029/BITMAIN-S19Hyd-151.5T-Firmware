// FUN_0126e2cc @ 0126e2cc size=1004 calls_out=1 calls_in=0
// strings: 

void FUN_0126e2cc(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  
  uVar2 = param_1[1];
  if (uVar2 == 0) {
    return;
  }
  uVar3 = (uint)((ulonglong)param_3 * 0x97cb3127);
  uVar7 = param_1[2];
  uVar3 = param_4 * -0x6834ced9 +
          param_3 * -0x3c5a37a4 + (int)((ulonglong)param_3 * 0x97cb3127 >> 0x20) +
          (uint)(0xb60c0e < uVar3) + uVar3 + 0xb6698d3b & uVar7;
  if (uVar3 < uVar2) {
    puVar16 = (uint *)*param_1;
    uVar12 = (param_3 & 3) * 0x10;
    uVar9 = (param_3 & 3) * -0x10 + 0x20;
    puVar8 = puVar16 + uVar3 * 2;
    uVar13 = *puVar8;
    uVar1 = 0xf << uVar12;
    uVar3 = uVar12 - 0x20;
    uVar11 = 0xf >> (uVar9 & 0xff);
    if (-1 < (int)uVar3) {
      uVar1 = 0;
    }
    if (-1 < (int)uVar3) {
      uVar11 = 0xf << (uVar3 & 0xff);
    }
    uVar1 = uVar13 & uVar1 ^ uVar1;
    uVar11 = puVar8[1] & uVar11 ^ uVar11;
    if (uVar1 != 0 || uVar11 != 0) {
      uVar9 = 1 >> (uVar9 & 0xff);
      if (-1 < (int)uVar3) {
        uVar9 = 1 << (uVar3 & 0xff);
      }
      uVar4 = 1 << uVar12;
      if (-1 < (int)uVar3) {
        uVar4 = 0;
      }
      *puVar8 = uVar13 + uVar4;
      puVar8[1] = puVar8[1] + uVar9 + (uint)CARRY4(uVar13,uVar4);
    }
    uVar3 = (uint)((ulonglong)param_3 * 0xbe98f273);
    uVar3 = param_4 * -0x41670d8d +
            param_3 * -0x4b6d4991 + (int)((ulonglong)param_3 * 0xbe98f273 >> 0x20) +
            (uint)(0x7dd26056 < uVar3) + uVar3 + 0x149ec6a6 & uVar7;
    if (uVar3 < uVar2) {
      uVar4 = uVar12 | 4;
      puVar8 = puVar16 + uVar3 * 2;
      uVar14 = *puVar8;
      uVar3 = uVar4 - 0x20;
      uVar9 = 0xf << uVar4;
      uVar13 = 0xf >> (0x20 - uVar4 & 0xff);
      if (-1 < (int)uVar3) {
        uVar9 = 0;
      }
      if (-1 < (int)uVar3) {
        uVar13 = 0xf << (uVar3 & 0xff);
      }
      uVar9 = uVar14 & uVar9 ^ uVar9;
      uVar13 = puVar8[1] & uVar13 ^ uVar13;
      if (uVar9 != 0 || uVar13 != 0) {
        uVar10 = 1 >> (0x20 - uVar4 & 0xff);
        if (-1 < (int)uVar3) {
          uVar10 = 1 << (uVar3 & 0xff);
        }
        uVar4 = 1 << uVar4;
        if (-1 < (int)uVar3) {
          uVar4 = 0;
        }
        *puVar8 = uVar14 + uVar4;
        puVar8[1] = puVar8[1] + uVar10 + (uint)CARRY4(uVar14,uVar4);
      }
      uVar3 = (uint)((ulonglong)param_3 * 0x2f90404f);
      uVar3 = param_4 * 0x2f90404f +
              param_3 * -0x651e95c5 + (int)((ulonglong)param_3 * 0x2f90404f >> 0x20) +
              (uint)(0x94f8679e < uVar3) + uVar3 + 0xec7af1b0 & uVar7;
      if (uVar3 < uVar2) {
        uVar10 = uVar12 | 8;
        puVar8 = puVar16 + uVar3 * 2;
        uVar15 = *puVar8;
        uVar4 = 0xf << uVar10;
        uVar3 = uVar10 - 0x20;
        uVar14 = 0xf >> (0x20 - uVar10 & 0xff);
        if (-1 < (int)uVar3) {
          uVar4 = 0;
        }
        if (-1 < (int)uVar3) {
          uVar14 = 0xf << (uVar3 & 0xff);
        }
        uVar4 = uVar15 & uVar4 ^ uVar4;
        uVar14 = puVar8[1] & uVar14 ^ uVar14;
        if (uVar4 != 0 || uVar14 != 0) {
          uVar5 = 1 >> (0x20 - uVar10 & 0xff);
          if (-1 < (int)uVar3) {
            uVar5 = 1 << (uVar3 & 0xff);
          }
          uVar10 = 1 << uVar10;
          if (-1 < (int)uVar3) {
            uVar10 = 0;
          }
          *puVar8 = uVar15 + uVar10;
          puVar8[1] = puVar8[1] + uVar5 + (uint)CARRY4(uVar15,uVar10);
        }
        uVar3 = (uint)((ulonglong)param_3 * 0x84222325);
        uVar3 = param_4 * -0x7bdddcdb +
                param_3 * -0x340d631c + (int)((ulonglong)param_3 * 0x84222325 >> 0x20) +
                (uint)(0x7d58dca6 < uVar3) + uVar3 + 0xde720e0c & uVar7;
        if (uVar3 < uVar2) {
          uVar12 = uVar12 | 0xc;
          puVar8 = puVar16 + uVar3 * 2;
          uVar15 = *puVar8;
          uVar10 = ~puVar8[1];
          uVar3 = ~uVar15 >> uVar12 | uVar10 << (0x20 - uVar12 & 0xff);
          uVar7 = uVar12 - 0x20;
          if (-1 < (int)uVar7) {
            uVar3 = uVar10 >> (uVar7 & 0xff);
          }
          if ((uVar3 & 0xf) == 0) {
            if (((uVar1 == 0 && uVar9 == 0) && (uVar11 == 0 && uVar13 == 0)) &&
                (uVar4 == 0 && uVar14 == 0)) {
              return;
            }
          }
          else {
            uVar3 = 1 >> (0x20 - uVar12 & 0xff);
            if (-1 < (int)uVar7) {
              uVar3 = 1 << (uVar7 & 0xff);
            }
            uVar12 = 1 << uVar12;
            if (-1 < (int)uVar7) {
              uVar12 = 0;
            }
            *puVar8 = uVar15 + uVar12;
            puVar8[1] = puVar8[1] + uVar3 + (uint)CARRY4(uVar15,uVar12);
          }
          uVar3 = param_1[5] + 1;
          param_1[5] = uVar3;
          if (uVar3 < (uint)param_1[4]) {
            return;
          }
          uVar7 = 0;
          iVar6 = uVar2 << 3;
          do {
            uVar1 = puVar16[1] & 0x11111111;
            uVar2 = *puVar16 & 0x11111111;
            iVar6 = iVar6 + -8;
            *puVar16 = *puVar16 >> 1 & 0x77777777;
            puVar16[1] = puVar16[1] >> 1 & 0x77777777;
            puVar16 = puVar16 + 2;
            uVar7 = uVar7 + ((uVar2 + (uVar2 >> 4) & 0x3030303) * 0x1010101 >> 0x18) +
                            ((uVar1 + (uVar1 >> 4) & 0x3030303) * 0x1010101 >> 0x18);
          } while (iVar6 != 0);
          param_1[5] = (uVar3 >> 1) - (uVar7 >> 2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar3,uVar2,&DAT_0188b4c8);
}

