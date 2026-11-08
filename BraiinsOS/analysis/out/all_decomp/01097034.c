// FUN_01097034 @ 01097034 size=300 calls_out=6 calls_in=9
// strings: 

uint FUN_01097034(uint *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*param_1 & 0xfffffffc) != 0) {
    return *param_1 & 0xfffffffc;
  }
  FUN_01071b28(&local_38,0,0x80);
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  puVar2[4] = uStack_28;
  puVar2[5] = uStack_24;
  if (*param_1 == 0) goto LAB_010970a4;
  do {
    ClearExclusiveLocal();
    while( true ) {
      uVar4 = *param_1;
      if ((uVar4 & 0xfffffffc) != 0) {
        puVar2 = (undefined4 *)((uint)puVar2 & 0xfffffffc);
        if (puVar2[1] != 0) {
          thunk_FUN_016d3fb4(*puVar2);
        }
        piVar3 = (int *)puVar2[2];
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00784894(puVar2[2]);
        }
        thunk_FUN_016d3fb4(puVar2);
        return uVar4 & 0xfffffffc;
      }
      if (*param_1 != 0) break;
LAB_010970a4:
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = (uint)puVar2;
        DataMemoryBarrier(0xb);
        if (((uint)puVar2 & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018840c0);
        }
        return (uint)puVar2 & 0xfffffffc;
      }
    }
  } while( true );
}

