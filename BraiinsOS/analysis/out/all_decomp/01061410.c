// FUN_01061410 @ 01061410 size=224 calls_out=1 calls_in=0
// strings: 

int FUN_01061410(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  local_28 = *param_1;
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0x14);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  iVar4 = FUN_0105dce0(uVar5,uVar6,iVar7,&local_28,1);
  if (iVar4 == 0) {
    *(int *)(param_2 + 0x14) = iVar7 + 1;
    local_27 = uVar1;
    iVar4 = FUN_0105dce0(uVar5,uVar6,iVar7 + 1,&local_27,1);
    if (iVar4 == 0) {
      *(int *)(param_2 + 0x14) = iVar7 + 2;
      local_26 = uVar2;
      iVar4 = FUN_0105dce0(uVar5,uVar6,iVar7 + 2,&local_26,1);
      if (iVar4 == 0) {
        *(int *)(param_2 + 0x14) = iVar7 + 3;
        local_25 = uVar3;
        iVar4 = FUN_0105dce0(uVar5,uVar6,iVar7 + 3,&local_25,1);
        if (iVar4 == 0) {
          *(int *)(param_2 + 0x14) = iVar7 + 4;
          iVar4 = 0;
        }
        return iVar4;
      }
    }
  }
  return iVar4;
}

