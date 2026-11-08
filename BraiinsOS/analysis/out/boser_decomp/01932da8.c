// FUN_01932da8 @ 01932da8 size=432 calls_out=8 calls_in=2
// strings: 

undefined4 FUN_01932da8(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_78 [21];
  
  uVar5 = 1;
  if (param_3 == param_1[3]) {
    iVar3 = param_1[2];
    iVar8 = *param_1;
    if (iVar3 == 0) {
      uVar11 = 0;
      FUN_01bed93e(local_78,0,0x50);
    }
    else {
      puVar10 = (undefined4 *)param_1[1];
      iVar4 = iVar3 << 3;
      uVar11 = 0;
      piVar2 = puVar10 + 1;
      do {
        iVar3 = iVar3 + -1;
        uVar11 = *piVar2 + uVar11;
        piVar2 = piVar2 + 2;
      } while (iVar3 != 0);
      if (0x50 < uVar11) {
        uVar5 = 0;
        if (-1 < (int)uVar11) {
          uVar5 = 1;
          local_78[1] = FUN_01298504(uVar11,1);
          if (local_78[1] != 0) {
            local_78[2] = 0;
            local_78[0] = uVar11;
            for (; uVar11 = local_78[1], iVar4 != 0; iVar4 = iVar4 + -8) {
              uVar5 = *puVar10;
              puVar1 = puVar10 + 1;
              puVar10 = puVar10 + 2;
              FUN_01ac6cbc(local_78,uVar5,*puVar1);
            }
            uVar5 = FUN_0070481c(iVar8,*(undefined4 *)(iVar8 + 0x48),param_2,param_3,local_78[1],
                                 local_78[2]);
            FUN_0134bd64(local_78[0],uVar11);
            return uVar5;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar5,uVar11);
      }
      FUN_01bed93e(local_78,0,0x50);
      puVar9 = puVar10 + 1;
      uVar7 = 0;
      do {
        uVar6 = *puVar9 + uVar7;
        if (CARRY4(*puVar9,uVar7) || 0x50 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar7,uVar6,0x50,&DAT_01d25950);
        }
        FUN_01bed4e2((int)local_78 + uVar7,puVar9[-1]);
        puVar9 = puVar9 + 2;
        iVar4 = iVar4 + -8;
        uVar7 = uVar6;
      } while (iVar4 != 0);
    }
    uVar5 = FUN_0070481c(iVar8,*(undefined4 *)(iVar8 + 0x48),param_2,param_3,local_78,uVar11);
  }
  return uVar5;
}

