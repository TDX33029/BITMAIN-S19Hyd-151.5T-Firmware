// FUN_019330d4 @ 019330d4 size=224 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_019330d4(int *param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uStack_21;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01d2575c);
  }
  iVar3 = *param_1;
  uVar4 = (**(code **)(iVar3 + 8))(param_2,uVar2,0x10);
  if ((int)uVar4 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d25810,&DAT_01d257cc);
  }
  puVar1 = (undefined8 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = uVar4;
  *(int *)(puVar1 + 1) = iVar3;
  FUN_01bed4e2((int)puVar1 + 0xc,param_3,0xc);
  iVar3 = 0;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return CONCAT44(&UNK_01d257dc,puVar1);
}

