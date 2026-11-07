// FUN_0004b1cc @ 0004b1cc  size=68  callers=2
// program: bmminer


void FUN_0004b1cc(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa84);
  if (param_2 >> 2 != 0) {
    uVar1 = 0x10;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      FUN_00045c40(uVar1,*puVar2);
      uVar1 = 0x11;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + (param_2 >> 2));
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa84);
  return;
}

