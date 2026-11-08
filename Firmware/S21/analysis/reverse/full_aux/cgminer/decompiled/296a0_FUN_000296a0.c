// FUN_000296a0 @ 000296a0  size=396  callers=1
// program: cgminer


char FUN_000296a0(void)

{
  char cVar1;
  tm *ptVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  time_t local_24;
  time_t local_20 [3];
  
  FUN_000206d8(local_20);
  local_24 = local_20[0];
  ptVar2 = localtime(&local_24);
  cVar1 = DAT_00076040;
  if (DAT_00076040 == '\0') {
    if (DAT_00074f4c <= ptVar2->tm_hour) {
      return ptVar2->tm_hour == DAT_00074f4c && ptVar2->tm_min < DAT_00074f48;
    }
    cVar5 = '\x01';
  }
  else {
    iVar4 = ptVar2->tm_min;
    iVar3 = ptVar2->tm_hour;
    cVar5 = DAT_00074f40;
    if (DAT_00074f40 == '\0') {
      if ((DAT_0007604c <= iVar3) && (DAT_00076048 <= iVar4 || DAT_0007604c != iVar3)) {
        DAT_00076040 = DAT_00074f40;
        cVar5 = cVar1;
      }
    }
    else if ((DAT_0007604c < DAT_00074f4c) ||
            (DAT_00076048 < DAT_00074f48 && DAT_00074f4c == DAT_0007604c)) {
      if ((iVar3 < DAT_00074f4c) || (cVar5 = '\0', iVar4 < DAT_00074f48 && DAT_00074f4c == iVar3)) {
        if (iVar3 < DAT_0007604c) {
          cVar5 = '\0';
        }
        else {
          cVar5 = DAT_00076048 <= iVar4 || DAT_0007604c != iVar3;
        }
      }
    }
    else if (((iVar3 < DAT_0007604c) || (iVar4 < DAT_00076048 && DAT_0007604c == iVar3)) &&
            (DAT_00074f4c <= iVar3)) {
      cVar5 = iVar4 < DAT_00074f48 && DAT_00074f4c == iVar3;
    }
  }
  return cVar5;
}

