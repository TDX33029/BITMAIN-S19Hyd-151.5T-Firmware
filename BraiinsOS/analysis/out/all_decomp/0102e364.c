// FUN_0102e364 @ 0102e364 size=216 calls_out=2 calls_in=2
// strings: 

void FUN_0102e364(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  int *local_18;
  code *local_14;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 8) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003832c5,0x31,&DAT_01883028);
  }
  uVar2 = param_2[1];
  local_1c = param_2[2];
  if (((*(uint *)(*param_2 + 0x38) <= uVar2) ||
      (piVar1 = (int *)(*(int *)(*param_2 + 0x34) + uVar2 * 0xf8), *piVar1 == 3 && piVar1[1] == 0))
     || (piVar1[0x35] != local_1c)) {
    local_18 = &local_1c;
    local_14 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_18,&DAT_01882550,FUN_0101a4ac,uVar2);
  }
  if ((char)piVar1[0x3a] != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003832a1,0x24,&DAT_01883038);
  }
  *(undefined1 *)(piVar1 + 0x3a) = 1;
  *(uint *)(param_1 + 0xc) = uVar3 + 1;
  return;
}

