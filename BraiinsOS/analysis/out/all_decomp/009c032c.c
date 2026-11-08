// FUN_009c032c @ 009c032c size=444 calls_out=5 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x009c0464) */

void FUN_009c032c(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 *local_28;
  
  uVar9 = *param_1;
  uVar7 = (uint)param_2 & 0xff;
  bVar4 = true;
  uVar10 = *(uint *)(uVar9 + uVar7 * 4);
  DataMemoryBarrier(0xb);
  uVar6 = 1;
  puVar1 = param_2;
  puVar8 = param_2;
  do {
    while (uVar10 != 0) {
      if ((uVar10 & 1) == 0) {
        if (*(undefined4 **)(uVar10 + 0xc) != param_2) {
          iVar3 = FUN_009b9698(*(undefined4 **)(uVar10 + 0xc));
          FUN_016dd606(iVar3,0,0x400);
          *(uint *)(iVar3 + (*(uint *)(uVar10 + 0xc) >> ((uVar6 & 3) << 3) & 0xff) * 4) = uVar10;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034a974,0x69,&DAT_0186a10c);
        }
        return;
      }
      uVar7 = ((uint)puVar8 & 0xffff) >> 8;
      uVar9 = uVar10 & 0xfffffffe;
      puVar8 = (undefined4 *)((uint)puVar8 >> 8);
      uVar6 = uVar6 + 1;
      uVar10 = *(uint *)(uVar9 + uVar7 * 4);
      DataMemoryBarrier(0xb);
    }
    puVar2 = puVar1;
    if (bVar4) {
      local_28 = (undefined4 *)0x0;
      iVar3 = FUN_016d51b0(&local_28,0x40,0x40);
      puVar2 = (undefined4 *)0x0;
      if (iVar3 == 0) {
        puVar2 = local_28;
      }
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x40,0x40);
      }
      *local_28 = 0;
      local_28[1] = 4;
      local_28[2] = 0;
      local_28[3] = puVar1;
      local_28[4] = uStack_70;
      local_28[5] = local_6c;
      local_28[6] = uStack_68;
      local_28[7] = uStack_64;
      local_28[8] = uStack_60;
      local_28[9] = uStack_5c;
      local_28[10] = local_58;
      local_28[0xb] = uStack_54;
      local_28[0xc] = uStack_50;
      local_28[0xd] = uStack_4c;
      local_28[0xe] = uStack_48;
      local_28[0xf] = uStack_44;
    }
    puVar5 = (uint *)(uVar9 + uVar7 * 4);
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar4 = (bool)hasExclusiveAccess(puVar5);
        if (bVar4) {
          *puVar5 = (uint)puVar2;
          DataMemoryBarrier(0xb);
          return;
        }
        uVar10 = *puVar5;
      } while (uVar10 == 0);
    }
    ClearExclusiveLocal();
    bVar4 = false;
    DataMemoryBarrier(0xb);
    puVar1 = puVar2;
  } while( true );
}

