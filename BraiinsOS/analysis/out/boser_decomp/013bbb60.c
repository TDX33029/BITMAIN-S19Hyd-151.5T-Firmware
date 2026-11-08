// FUN_013bbb60 @ 013bbb60 size=188 calls_out=5 calls_in=2
// strings: 

void FUN_013bbb60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_2c;
  int local_28;
  undefined1 local_24;
  int local_20;
  undefined1 local_1c;
  
  FUN_01933ff0(&local_2c,*param_1 + 8);
  if (local_2c == 1) {
    local_1c = local_24;
    local_20 = local_28;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01cf144c,&DAT_01cf0e2c);
  }
  iVar3 = param_1[1];
  iVar4 = param_1[2];
  iVar1 = FUN_0139f148(*(undefined4 *)(local_28 + 0x18c),*(undefined4 *)(local_28 + 400),iVar3,iVar4
                      );
  *(undefined1 *)(iVar1 + 0xe8) = 0;
  uVar2 = FUN_0139f148(*(undefined4 *)(local_28 + 0x18c),*(undefined4 *)(local_28 + 400),iVar3,iVar4
                      );
  FUN_013942a4(local_28 + 0x38,uVar2);
  FUN_00a97e8c(local_28,local_24);
  return;
}

