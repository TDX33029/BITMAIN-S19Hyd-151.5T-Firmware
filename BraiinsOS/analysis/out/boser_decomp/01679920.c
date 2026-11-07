// FUN_01679920 @ 01679920 size=724 calls_out=10 calls_in=0
// strings: CompiledTooBig | Syntax( deadlock 

undefined4 FUN_01679920(int ***param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int **ppiVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int **local_60;
  int ***local_5c;
  int *local_58;
  undefined1 local_54;
  undefined1 local_53;
  int ****local_50;
  undefined1 *local_4c;
  undefined1 *puStack_48;
  undefined1 local_41;
  undefined4 ****local_40;
  undefined *local_3c;
  uint local_38;
  int local_34;
  undefined1 auStack_2e [10];
  
  if (*param_1 == (int **)0x80000000) {
    ppiVar4 = param_1[1];
    iVar7 = *param_2;
    pcVar5 = *(code **)(param_2[1] + 0xc);
    local_60 = ppiVar4;
    iVar1 = (*pcVar5)(iVar7,"CompiledTooBig",0xe);
    local_54 = 1;
    local_53 = 0;
    local_58 = param_2;
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar5)(iVar7,"(",1);
        if (iVar1 == 0) {
          uVar2 = param_2[2];
          if ((uVar2 & 0x2000000) == 0) {
            if ((uVar2 & 0x4000000) == 0) {
              local_54 = FUN_012fd02c(&local_60,param_2);
            }
            else {
              local_54 = FUN_012fdbc0(&local_60,param_2);
            }
          }
          else {
            local_54 = FUN_012fdfb4(ppiVar4,param_2);
          }
        }
      }
      else {
        iVar1 = (*pcVar5)(iVar7,"(\n",2);
        local_54 = 1;
        if (iVar1 == 0) {
          local_50 = (int ****)*param_2;
          local_4c = (undefined1 *)param_2[1];
          local_41 = 1;
          puStack_48 = &local_41;
          local_38 = param_2[2];
          local_34 = param_2[3];
          local_3c = &DAT_01ce45f8;
          local_40 = &local_50;
          if ((local_38 & 0x2000000) == 0) {
            if ((local_38 & 0x4000000) == 0) {
              iVar1 = FUN_012fc81c(ppiVar4,auStack_2e);
              iVar1 = FUN_012fa378(&local_40,1,1,0,auStack_2e + iVar1,10 - iVar1);
            }
            else {
              iVar1 = FUN_012fdbc0(&local_60,&local_40);
            }
          }
          else {
            iVar1 = FUN_012fdfb4(ppiVar4,&local_40);
          }
          if (iVar1 == 0) {
            local_54 = (**(code **)(local_3c + 0xc))(local_40,&DAT_005312e2,2);
          }
          else {
            local_54 = 1;
          }
        }
      }
    }
    local_5c = (int ***)0x1;
    uVar3 = FUN_01302aa0(&local_5c);
    return uVar3;
  }
  local_5c = param_1;
  FUN_016eb78c(&local_40,0x7e,0x4f);
  iVar7 = *param_2;
  iVar6 = param_2[1];
  pcVar5 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar5)(iVar7,"Syntax(\ndeadlock\n",8);
  if (iVar1 == 0) {
    local_4c = &LAB_00632348;
    local_50 = (int ****)&local_40;
    iVar1 = FUN_012fa178(iVar7,iVar6,&DAT_00582d7f,&local_50);
    if (iVar1 == 0) {
      local_50 = &local_5c;
      local_4c = &LAB_0193a90c;
      iVar1 = FUN_012fa178(iVar7,iVar6,&DAT_00582d7f,&local_50);
      if (iVar1 == 0) {
        local_4c = &LAB_00632348;
        local_50 = (int ****)&local_40;
        iVar1 = FUN_012fa178(iVar7,iVar6,&DAT_00582d7f,&local_50);
        if ((iVar1 == 0) && (iVar1 = (*pcVar5)(iVar7,&DAT_0053341b,1), iVar1 == 0)) {
          FUN_0134bd64(local_40,local_3c);
          return 0;
        }
      }
    }
  }
  FUN_0134bd64(local_40,local_3c);
  return 1;
}

