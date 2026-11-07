// FUN_00907344 @ 00907344 size=356 calls_out=6 calls_in=1
// strings: pause_fan_mode | manual | manual_indefinite

int FUN_00907344(char *param_1,char param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 != '\0') {
    local_20 = 10;
    iVar1 = FUN_0157c50c(&local_20,0,0);
    return iVar1;
  }
  iVar1 = FUN_00947ca4(param_1,"pause_fan_mode",0xe);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  piVar4 = (int *)*puVar5;
  iVar1 = piVar4[2];
  if ((uint)(*piVar4 - iVar1) < 2) {
    FUN_00933680(piVar4,iVar1,2,1,1);
    iVar1 = piVar4[2];
  }
  piVar4[2] = iVar1 + 2;
  *(undefined2 *)(piVar4[1] + iVar1) = 0x203a;
  if (param_2 == '\0') {
    uVar3 = 4;
    pcVar2 = &DAT_00568078;
  }
  else if (param_2 == '\x01') {
    uVar3 = 6;
    pcVar2 = "manual";
  }
  else {
    uVar3 = 0x11;
    pcVar2 = "manual_indefinite";
  }
  FUN_00947e44(&local_20,*puVar5,pcVar2,uVar3);
  iVar1 = 0;
  if ((char)local_20 != '\x04') {
    iVar1 = FUN_0157c4a0(local_20,local_1c);
  }
  if (iVar1 == 0) {
    *(undefined1 *)(puVar5 + 4) = 1;
    iVar1 = 0;
  }
  return iVar1;
}

