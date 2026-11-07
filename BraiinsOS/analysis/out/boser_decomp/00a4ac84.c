// FUN_00a4ac84 @ 00a4ac84 size=292 calls_out=3 calls_in=2
// strings: 

undefined1 FUN_00a4ac84(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  local_24 = param_1 + param_2;
  uVar5 = 1;
  local_20 = 0;
  local_1c = 1;
  local_38 = 0;
  local_34 = param_2;
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_1;
  FUN_01318760(&local_44,&local_38);
  if (local_3c < 6) goto LAB_00a4ad34;
  iVar2 = *(int *)(local_40 + 0x24);
  pcVar3 = *(char **)(local_40 + 0x28);
  iVar4 = *(int *)(local_40 + 0x2c);
  if (*(int *)(local_40 + 0x1c) == 1) {
    if (iVar2 == 1 && **(char **)(local_40 + 0x18) == '*') {
      cVar1 = **(char **)(local_40 + 0x20);
      if (iVar4 == 1 && cVar1 == '*') {
        uVar5 = *pcVar3 != '*';
        goto LAB_00a4ad34;
      }
      if (cVar1 == '*') {
        if (iVar4 == 1) {
          uVar5 = 1;
        }
        goto LAB_00a4ad34;
      }
    }
    else if ((iVar2 == 1) && (**(char **)(local_40 + 0x18) != '*')) goto LAB_00a4ad18;
  }
  else if (iVar2 == 1) {
LAB_00a4ad18:
    iVar2 = thunk_FUN_01bed842(*(char **)(local_40 + 0x20),"*");
    if ((iVar4 == 1 && iVar2 == 0) && (uVar5 = 2, *pcVar3 == '*')) goto LAB_00a4ad34;
  }
  uVar5 = 1;
LAB_00a4ad34:
  FUN_0134aee0(local_44,local_40,4,8);
  return uVar5;
}

