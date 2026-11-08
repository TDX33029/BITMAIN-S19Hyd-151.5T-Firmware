// FUN_01744fa8 @ 01744fa8 size=116 calls_out=1 calls_in=1
// strings: 

void FUN_01744fa8(int *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  uVar4 = (**(code **)(param_1[1] + 0x10))
                    (*param_1 + (*(int *)(param_1[1] + 8) - 1U & 0xfffffff8) + 8);
  uVar2 = *(undefined4 *)param_2;
  puVar3 = *(undefined4 **)((int)param_2 + 4);
  pcVar1 = (code *)*puVar3;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  if (puVar3[1] != 0) {
    thunk_FUN_01be4678(uVar2);
  }
  *param_2 = uVar4;
  return;
}

