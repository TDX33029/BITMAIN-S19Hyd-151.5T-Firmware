// FUN_018d8c08 @ 018d8c08 size=400 calls_out=4 calls_in=0
// strings: 

void FUN_018d8c08(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [23];
  undefined2 local_29;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  
  uVar6 = param_3[2];
  if (uVar6 < 0x10) {
    iVar7 = param_3[1];
LAB_018d8cd8:
    uVar3 = 5;
  }
  else {
    FUN_018be814(auStack_4c,param_2 + 0x220,param_5,param_6);
    iVar7 = param_3[1];
    FUN_01bed4e2(auStack_40,iVar7 + (uVar6 - 0x10),0x10);
    local_25 = (undefined1)uVar6;
    local_26 = (undefined1)(uVar6 >> 8);
    local_27 = 3;
    local_29 = 0x317;
    uVar9 = FUN_01896d58(param_2,auStack_4c,&local_29,5,auStack_40,iVar7,uVar6 - 0x10,0);
    uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
    if ((int)uVar9 == 0) {
      param_1[2] = 0;
      goto LAB_018d8cd8;
    }
    if (uVar5 <= uVar6) {
      param_3[2] = uVar5;
      uVar6 = uVar5;
    }
    if (uVar6 < 0x4002) {
      while (uVar6 = uVar6 - 1, uVar6 != 0xffffffff) {
        cVar1 = *(char *)(iVar7 + uVar6);
        param_3[2] = uVar6;
        if (cVar1 != '\0') {
          switch(cVar1) {
          case '\x14':
            uVar3 = 0;
            break;
          case '\x15':
            uVar3 = 1;
            break;
          case '\x16':
            uVar3 = 2;
            break;
          case '\x17':
            uVar3 = 3;
            break;
          case '\x18':
            uVar3 = 4;
            break;
          default:
            uVar3 = 5;
          }
          uVar4 = param_3[1];
          uVar8 = param_3[2];
          *param_1 = *param_3;
          param_1[1] = uVar4;
          param_1[2] = uVar8;
          *(char *)((int)param_1 + 0x11) = cVar1;
          *(undefined1 *)(param_1 + 4) = uVar3;
          uVar2 = *(undefined2 *)((int)param_3 + 0xe);
          *(undefined2 *)(param_1 + 3) = 5;
          *(undefined2 *)((int)param_1 + 0xe) = uVar2;
          return;
        }
      }
      *(undefined2 *)(param_1 + 1) = 0x1508;
      goto LAB_018d8ce0;
    }
    uVar3 = 0x11;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
LAB_018d8ce0:
  uVar4 = *param_3;
  *param_1 = 0x80000000;
  FUN_0134bd64(uVar4,iVar7);
  return;
}

