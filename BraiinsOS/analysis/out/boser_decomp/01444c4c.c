// FUN_01444c4c @ 01444c4c size=276 calls_out=4 calls_in=2
// strings: 

void FUN_01444c4c(undefined1 *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int local_90;
  char local_8c;
  undefined1 local_8b;
  undefined1 auStack_8a [42];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_30 [16];
  
  if (*param_2 == '\x04') {
    cVar3 = param_2[1];
    uVar2 = 4;
    local_8c = param_2[2];
  }
  else {
    local_60 = *(undefined4 *)param_2;
    uStack_5c = *(undefined4 *)(param_2 + 4);
    uStack_58 = *(undefined4 *)(param_2 + 8);
    uStack_54 = *(undefined4 *)(param_2 + 0xc);
    uStack_50 = *(undefined4 *)(param_2 + 0x10);
    local_4c = *(undefined4 *)(param_2 + 0x14);
    local_48 = *(int *)(param_2 + 0x18);
    local_44 = *(undefined4 *)(param_2 + 0x1c);
    local_40 = *(undefined4 *)(param_2 + 0x20);
    uStack_3c = *(undefined4 *)(param_2 + 0x24);
    uStack_38 = *(undefined4 *)(param_2 + 0x28);
    FUN_012834b0(auStack_30,param_3,1);
    FUN_014134f0(&local_90,auStack_30);
    if (local_90 == 0) {
      FUN_0143bfe8(&local_60);
      uVar2 = 4;
      cVar3 = '\x02';
    }
    else {
      FUN_01bed4e2(auStack_30,auStack_8a,0xe);
      if (local_48 != 0) {
        (**(code **)(local_48 + 0x10))(&uStack_3c,local_44,local_40);
      }
      local_44 = CONCAT31(CONCAT21(local_44._2_2_,local_8b),local_8c);
      local_48 = local_90;
      FUN_01bed4e2((int)&local_44 + 2,auStack_30,0xe);
      uVar2 = (undefined1)local_60;
      cVar3 = local_60._1_1_;
      cVar1 = local_60._2_1_;
      FUN_01bed4e2(&local_90,(uint)&local_60 | 3,0x29);
      local_8c = cVar1;
    }
  }
  param_1[2] = local_8c;
  param_1[1] = cVar3;
  *param_1 = uVar2;
  FUN_01bed4e2(param_1 + 3,&local_90,0x29);
  return;
}

