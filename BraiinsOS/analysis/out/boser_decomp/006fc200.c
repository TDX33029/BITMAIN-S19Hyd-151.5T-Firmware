// FUN_006fc200 @ 006fc200 size=260 calls_out=6 calls_in=2
// strings: 

void FUN_006fc200(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  char local_30;
  undefined2 local_2f;
  undefined1 local_2d;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar6 = CONCAT44(param_3,param_2);
  uVar4 = FUN_00700b3c(param_2,param_3,0x21);
  if ((int)uVar4 != 0) {
    uVar6 = uVar4;
  }
  uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar5 = FUN_00700b14((int)uVar6,uVar1);
  if ((int)uVar5 == 0) {
    lVar7 = FUN_006fc4cc((int)uVar6,uVar1);
  }
  else {
    uVar6 = FUN_00700b3c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x5d);
    if (((int)uVar6 == 0) ||
       (FUN_006fc200(&local_38,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20)), local_30 == '\x02')) {
      uVar2 = 2;
      goto LAB_006fc2ec;
    }
    local_20 = CONCAT13(local_2d,CONCAT21(local_2f,local_30));
    local_24 = uStack_34;
    local_28 = local_38;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    lVar7 = ZEXT48(puVar3) << 0x20;
    *puVar3 = local_28;
    puVar3[1] = local_24;
    puVar3[2] = local_20;
  }
  *param_1 = lVar7;
  uVar2 = (int)uVar4 == 0;
LAB_006fc2ec:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}

