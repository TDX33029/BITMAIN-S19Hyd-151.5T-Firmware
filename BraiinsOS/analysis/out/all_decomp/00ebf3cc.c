// FUN_00ebf3cc @ 00ebf3cc size=420 calls_out=5 calls_in=0
// strings: mpsc bounded channel requires buffer > 0

void FUN_00ebf3cc(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *local_e0;
  undefined1 *local_dc;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_24;
  
  ppuVar6 = &local_e0;
  uVar8 = *(uint *)(param_2 + 0xf8);
  if (uVar8 == 0) {
    ppuVar6 = (undefined **)&DAT_00000051;
    puVar7 = &DAT_0187bc90;
    pcVar5 = "mpsc bounded channel requires buffer > 0";
  }
  else {
    if (uVar8 < 0x20000000) {
      local_50 = uVar8 << 1;
      local_54 = 0;
      local_58 = 0;
      local_5c = 0;
      local_60 = 0;
      local_c0 = thunk_FUN_016d4a50(0x2e90);
      if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x2e90);
      }
      *(undefined4 *)(local_c0 + 0x2e80) = 0;
      local_dc = (undefined1 *)0x1;
      local_e0 = (undefined *)0x1;
      local_48 = 1;
      *(undefined4 *)(local_c0 + 0x2e84) = 0;
      *(undefined4 *)(local_c0 + 0x2e88) = 0;
      *(undefined4 *)(local_c0 + 0x2e8c) = 0;
      local_68 = 0;
      local_80 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_bc = 0;
      local_7c = 0;
      local_78 = 0;
      local_74 = 0;
      local_44 = 0;
      local_64 = 0;
      local_24 = (int *)0x0;
      local_70 = local_c0;
      local_6c = local_c0;
      local_4c = uVar8;
      iVar4 = FUN_016d51b0(&local_24,0x20,0xa0);
      piVar3 = local_24;
      if ((iVar4 != 0) || (local_24 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0xa0);
      }
      FUN_016dd1aa(local_24,&local_e0,0xa0);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + 1;
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xebf574);
        (*pcVar1)();
      }
      FUN_016dd1aa(param_1,param_2,0x100);
      FUN_016dd1aa(param_1 + 0x108,param_3,0x48);
      *(int **)(param_1 + 0x100) = piVar3;
      *(int **)(param_1 + 0x104) = piVar3;
      return;
    }
    puVar7 = &DAT_018ac69c;
    pcVar5 = &DAT_005989dd;
    local_dc = &LAB_00fac484;
    local_e0 = &DAT_00568964;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(pcVar5,ppuVar6,puVar7);
}

