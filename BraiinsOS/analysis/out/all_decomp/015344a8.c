// FUN_015344a8 @ 015344a8 size=536 calls_out=2 calls_in=2
// strings: 

longlong FUN_015344a8(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar5 = ((uint *)param_1[2])[1];
  uVar4 = param_5 - 0x10;
  if (uVar5 == 0 && (uVar4 <= *(uint *)param_1[2]) <= uVar5) {
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((int)param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 3) = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 5) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 7) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 10) = 0;
    *(undefined1 *)((int)param_2 + 0xb) = 0;
    return (ulonglong)uVar4 << 0x20;
  }
  if (*param_1 - 5U < 2) {
    local_44[0] = *(undefined1 *)param_2;
    puVar3 = (undefined4 *)(param_4 + uVar4);
    local_40 = *puVar3;
    local_30 = *param_2;
    local_2c = param_2[1];
    local_28 = param_2[2];
    local_3c = puVar3[1];
    local_38 = puVar3[2];
    local_34 = puVar3[3];
    iVar1 = FUN_017237a8(param_1[1],param_4,0,0,param_4,uVar4,&local_40,0x1c,param_3,5);
  }
  else {
    local_40 = *param_2;
    local_3c = param_2[1];
    local_38 = param_2[2];
    iVar1 = FUN_017238bc(param_1[1],param_4,local_44,uVar4,&local_40,0xc,param_4,param_5,param_3,5);
  }
  iVar2 = 0;
  if (iVar1 == 1) {
    iVar2 = param_4;
  }
  return CONCAT44(uVar4,iVar2);
}

