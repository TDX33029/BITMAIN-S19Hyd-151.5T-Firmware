// FUN_018f6e9c @ 018f6e9c size=240 calls_out=5 calls_in=0
// strings: 

undefined8 FUN_018f6e9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char local_3f8 [492];
  undefined4 *local_20c;
  char local_204 [492];
  
  if (0x20 < *(uint *)(param_2 + 0x20)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(param_2 + 0x20),0x20,&DAT_01d2575c);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x14);
  (*(code *)*puVar2)(local_204,param_2);
  if (local_204[0] == '\x04') {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_204,&DAT_01d23ff8,&DAT_01d24008);
  }
  FUN_01bed4e2((uint)local_3f8 | 1,(uint)local_204 | 1,0x1eb);
  iVar1 = 0;
  local_3f8[0] = local_204[0];
  do {
    *(undefined1 *)(param_2 + iVar1) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x20);
  local_20c = puVar2;
  iVar1 = thunk_FUN_01be5118(0x1f0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1f0);
  }
  FUN_01bed4e2(iVar1,local_3f8,0x1f0);
  return CONCAT44(&PTR_LAB_01d24048,iVar1);
}

