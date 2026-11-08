// FUN_01680ef8 @ 01680ef8 size=256 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01680ef8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint local_14;
  uint *local_10;
  code *local_c;
  
  iVar4 = 1;
  uVar3 = 0;
  if ((*(uint *)(param_1 + 0x10) <= param_2) && (param_2 <= *(uint *)(param_1 + 0x14))) {
    iVar4 = *(int *)(param_1 + 0x184);
    local_14 = param_2 - *(uint *)(param_1 + 0x10) >> (*(uint *)(param_1 + 0x15c) & 0x1f);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0,0,&DAT_01d09968);
    }
    puVar5 = *(uint **)(param_1 + 0x180);
    if (*puVar5 <= local_14) {
      local_10 = &local_14;
      local_c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00587011,&local_10,&DAT_01d082dc);
    }
    uVar1 = iVar4 * 4;
    uVar3 = local_14 << 3 | 4;
    if ((uint)(iVar4 << 2) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,uVar1,&DAT_01d082bc);
    }
    uVar3 = (uint)*(byte *)((int)puVar5 + uVar3);
    uVar2 = local_14 << 3 | 5;
    if ((CARRY4(uVar2,uVar3)) || (uVar1 < uVar2 + uVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar2,uVar2 + uVar3,uVar1,&DAT_01d082cc);
    }
    iVar4 = (int)puVar5 + uVar2;
  }
  return CONCAT44(uVar3,iVar4);
}

