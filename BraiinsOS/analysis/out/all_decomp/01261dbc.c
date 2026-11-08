// FUN_01261dbc @ 01261dbc size=368 calls_out=9 calls_in=2
// strings: improperly encoded string

undefined4 * FUN_01261dbc(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_2c;
  int iStack_28;
  int *piStack_24;
  
  piVar2 = (int *)FUN_01261fac();
  if (piVar2 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (*(int *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_0188ad48);
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
    FUN_01357e28(param_3 + 8,param_4,param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = *(undefined4 *)(param_2 + 0x14);
    iVar3 = FUN_01009aa0("",uVar5,uVar6);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("improperly encoded string",0x33,&DAT_01892170);
    }
    local_2c = piVar2[3];
    iStack_28 = piVar2[4];
    piStack_24 = piVar2 + 5;
    FUN_0100bb14(&local_58,&local_2c,uVar5,uVar6);
    local_4c = piVar2[5];
    iStack_48 = piVar2[6];
    iStack_44 = piVar2[7];
    local_40 = piVar2[8];
    iStack_3c = piVar2[9];
    iStack_38 = piVar2[10];
    iStack_34 = piVar2[0xb];
    *(undefined4 *)(param_2 + 0x14) = 0;
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x30);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x30);
    }
    *puVar4 = 1;
    puVar4[1] = 1;
    puVar4[2] = local_58;
    puVar4[3] = uStack_54;
    puVar4[4] = local_50;
    puVar4[5] = local_4c;
    puVar4[6] = iStack_48;
    puVar4[7] = iStack_44;
    puVar4[8] = local_40;
    puVar4[9] = iStack_3c;
    puVar4[10] = iStack_38;
    puVar4[0xb] = iStack_34;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar2);
      return puVar4;
    }
  }
  return puVar4;
}

