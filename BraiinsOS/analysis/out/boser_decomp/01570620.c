// FUN_01570620 @ 01570620 size=288 calls_out=8 calls_in=2
// strings: 

undefined4 * FUN_01570620(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  piVar3 = (int *)FUN_015707a4();
  if (piVar3 == (int *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    if (*(int *)(param_2 + 8) != 0) {
      FUN_01306fc8(&DAT_01cfbce0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x157073c);
      (*pcVar1)();
    }
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
    FUN_016702b8(param_3 + 8,param_4,param_2 + 0xc);
    uVar6 = FUN_0167127c(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    FUN_01675b40(&local_48,piVar3 + 2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    *(undefined4 *)(param_2 + 0x14) = 0;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x30);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x30);
    }
    *puVar4 = 1;
    puVar4[1] = 1;
    puVar4[2] = local_48;
    puVar4[3] = uStack_44;
    puVar4[4] = local_40;
    puVar4[5] = uStack_3c;
    puVar4[6] = uStack_38;
    puVar4[7] = uStack_34;
    puVar4[8] = local_30;
    puVar4[9] = uStack_2c;
    puVar4[10] = uStack_28;
    puVar4[0xb] = uStack_24;
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar3);
    }
  }
  return puVar4;
}

