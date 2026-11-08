// FUN_013c75bc @ 013c75bc size=172 calls_out=1 calls_in=0
// strings: 

void FUN_013c75bc(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char local_26;
  char local_25;
  undefined4 local_24;
  char *local_20;
  code *local_1c;
  char *local_18;
  code *local_14;
  undefined4 *local_10;
  code *local_c;
  
  puVar2 = (undefined4 *)*param_1;
  local_25 = *(char *)((int)puVar2 + 5);
  cVar1 = *(char *)(puVar2 + 1);
  local_24 = *puVar2;
  if (cVar1 == local_25) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    local_14 = FUN_007883b8;
    local_18 = (char *)&local_24;
    puVar5 = &DAT_0057a481;
    local_20 = &local_25;
    local_25 = cVar1;
  }
  else {
    local_10 = &local_24;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    local_18 = &local_25;
    puVar5 = &DAT_00592599;
    local_c = FUN_007883b8;
    local_20 = &local_26;
    local_14 = FUN_0138c348;
    local_26 = cVar1;
  }
  local_1c = FUN_0138c348;
  FUN_00fa948c(uVar3,uVar4,puVar5,&local_20);
  return;
}

