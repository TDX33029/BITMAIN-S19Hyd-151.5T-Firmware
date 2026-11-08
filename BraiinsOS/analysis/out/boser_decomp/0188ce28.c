// FUN_0188ce28 @ 0188ce28 size=228 calls_out=5 calls_in=1
// strings: 

void FUN_0188ce28(uint *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  undefined1 local_24;
  
  FUN_01933ff0(&local_40,*param_2 + 8);
  uVar1 = local_3c;
  if (local_40 == 1) {
    local_24 = (undefined1)local_38;
    local_28 = local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d2072c,&DAT_01d2c748);
  }
  uVar4 = local_38 & 0xff;
  uVar3 = FUN_01367cb8(*(undefined4 *)(local_3c + 0x18c),*(undefined4 *)(local_3c + 400),param_2[1],
                       param_2[2]);
  FUN_01387064(&local_40,param_3,uVar3,1);
  if ((local_40 & 0xff) == 5) {
    param_1[1] = local_3c;
    uVar2 = 5;
  }
  else {
    if ((local_40 & 0xff) != 6) {
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = local_38;
      param_1[3] = uStack_34;
      param_1[4] = uStack_30;
      param_1[5] = uStack_2c;
      goto LAB_0188cec0;
    }
    uVar2 = 6;
  }
  *(undefined1 *)param_1 = uVar2;
LAB_0188cec0:
  FUN_00a97e8c(uVar1,uVar4);
  return;
}

