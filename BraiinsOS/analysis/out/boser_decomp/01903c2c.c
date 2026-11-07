// FUN_01903c2c @ 01903c2c size=256 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_01903c2c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uStack_19;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01d2575c);
  }
  uVar4 = FUN_00705480(param_2,uVar2,0x10);
  if ((int)uVar4 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_19,&DAT_01d24da4,&DAT_01d24d40);
  }
  if (param_4 != 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013070f0(0xc,param_4,&DAT_01d256d4);
  }
  puVar1 = (undefined8 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *(undefined **)(puVar1 + 1) = &DAT_01d24d28;
  *puVar1 = uVar4;
  FUN_01bed4e2((int)puVar1 + 0xc,param_3,0xc);
  iVar3 = 0;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return CONCAT44(&UNK_01d24d50,puVar1);
}

