// FUN_01504bf4 @ 01504bf4 size=356 calls_out=3 calls_in=0
// strings: 

void FUN_01504bf4(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint unaff_r10;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_30;
  uint local_2c;
  
  iVar7 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar7);
  }
  if (iVar7 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar12 = thunk_FUN_016d4a50(iVar7);
    puVar4 = (uint *)((ulonglong)uVar12 >> 0x20);
    local_2c = (uint)uVar12;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar7);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      puVar9 = (uint *)(param_2 + 8);
      puVar8 = (uint *)(local_2c + 8);
      uVar6 = 0;
      do {
        if (iVar7 == 0) break;
        uVar2 = 2;
        if ((int)puVar9[-2] < 0) {
          uVar2 = puVar9[-2] ^ 0x80000000;
        }
        if (uVar2 == 0) {
          uVar2 = 0x80000000;
        }
        else if (uVar2 == 1) {
          uVar2 = 0x80000001;
        }
        else {
          unaff_r10 = *puVar9;
          uVar3 = 0;
          bVar11 = 0x3ffffffe < unaff_r10;
          bVar10 = unaff_r10 == 0x3fffffff;
          puVar1 = param_1;
          if (unaff_r10 < 0x40000000) {
            puVar1 = (uint *)(unaff_r10 << 2);
            bVar11 = (uint *)0x7ffffffb < puVar1;
            bVar10 = puVar1 == (uint *)0x7ffffffc;
          }
          if (bVar11 && !bVar10) {
LAB_01504d48:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar3,puVar4);
          }
          uVar5 = puVar9[-1];
          if (puVar1 == (uint *)0x0) {
            puVar4 = (uint *)&DAT_00000004;
            uVar2 = 0;
          }
          else {
            puVar4 = (uint *)thunk_FUN_016d4a50(puVar1);
            if (puVar4 == (uint *)0x0) {
              uVar3 = 4;
              puVar4 = puVar1;
              goto LAB_01504d48;
            }
            uVar2 = unaff_r10;
          }
          FUN_016dd1aa(puVar4,uVar5,puVar1);
        }
        uVar6 = uVar6 + 1;
        puVar8[-2] = uVar2;
        *puVar8 = unaff_r10;
        puVar8[-1] = (uint)puVar4;
        puVar8 = puVar8 + 3;
        iVar7 = iVar7 + -0xc;
        puVar9 = puVar9 + 3;
      } while (param_3 != uVar6);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

