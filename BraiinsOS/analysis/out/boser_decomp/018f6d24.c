// FUN_018f6d24 @ 018f6d24 size=248 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_018f6d24(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 uStack_25;
  
  uVar2 = *(uint *)(param_2 + 0x20);
  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,0x20,&DAT_01d2575c);
  }
  iVar4 = param_1[4];
  uVar6 = param_1[3];
  uVar5 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = (**(code **)(iVar4 + 8))(param_2,uVar2,0x10);
  if ((int)uVar9 == 0xc) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01d23ff8,&DAT_01d24018);
  }
  iVar3 = 0;
  do {
    *(undefined1 *)(param_2 + iVar3) = 0;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar1 = uVar5;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar6;
  FUN_01bed4e2(puVar1 + 4,param_3,0xc);
  *(undefined8 *)(puVar1 + 7) = uVar9;
  puVar1[9] = iVar4;
  return CONCAT44(&UNK_01d24028,puVar1);
}

