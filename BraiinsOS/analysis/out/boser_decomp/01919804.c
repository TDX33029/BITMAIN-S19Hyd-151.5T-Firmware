// FUN_01919804 @ 01919804 size=260 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01919804(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_30;
  int iStack_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  uVar5 = *param_2;
  iVar6 = param_2[1];
  iVar4 = *param_1;
  pcVar3 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar3)(uVar5,&DAT_005235ca,0xe);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar5,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01938ea4(uVar5,iVar6,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
  }
  else {
    iVar1 = (*pcVar3)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_28 = &local_21;
    local_21 = 1;
    local_30 = uVar5;
    iStack_2c = iVar6;
    iVar1 = FUN_01938ea4(&local_30,&DAT_01ce45f8,*(undefined4 *)(iVar4 + 4),
                         *(undefined4 *)(iVar4 + 8));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01302620(&local_30,&DAT_005312e2,2);
  }
  uVar2 = 1;
  if (iVar1 == 0) {
    uVar2 = (*pcVar3)(uVar5,&DAT_0053341b,1);
  }
  return uVar2;
}

