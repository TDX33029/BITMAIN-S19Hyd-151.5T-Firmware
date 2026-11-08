// FUN_013454b0 @ 013454b0 size=368 calls_out=3 calls_in=1
// strings: 

void FUN_013454b0(uint *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  short local_32 [9];
  uint local_20;
  char local_1c;
  
  uVar4 = 1;
  iVar2 = FUN_01344ae8(param_2,&DAT_0053340d,1);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 1) = 3;
    *(undefined1 *)param_1 = 4;
    return;
  }
  uVar3 = param_2[2];
  FUN_01345690(local_32,param_2);
  if (local_32[0] != 0) {
LAB_013454fc:
    iVar2 = FUN_01344ae8(param_2,"]",1);
    if (iVar2 == 0) {
      uVar3 = param_2[2];
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = uVar3;
      return;
    }
    *(undefined1 *)param_1 = uVar4;
    *(undefined1 *)(param_1 + 1) = 3;
    return;
  }
  cVar1 = '\x02';
  if (param_2[2] != uVar3) goto LAB_013455f8;
  if ((uVar3 < (uint)param_2[1]) && ((*(byte *)(*param_2 + uVar3) | 0x20) == 0x76)) {
    param_2[2] = uVar3 + 1;
    FUN_01344ce0(&local_20,param_2,&DAT_00451b67);
    cVar1 = local_1c;
    if (local_1c != '\x03') {
LAB_01345618:
      uVar3 = local_20;
      goto LAB_013455f8;
    }
    if (((char)local_20 == '\x01') && (iVar2 = FUN_01344ae8(param_2,".",1), iVar2 != 0)) {
      FUN_01344ce0(&local_20,param_2,&DAT_00451c6a);
      cVar1 = local_1c;
      if (local_1c != '\x03') goto LAB_01345618;
      uVar4 = 2;
      if ((char)local_20 != '\0') goto LAB_013454fc;
    }
  }
  cVar1 = '\x01';
  uVar3 = param_2[2];
LAB_013455f8:
  *(char *)(param_1 + 1) = cVar1;
  *param_1 = uVar3;
  return;
}

