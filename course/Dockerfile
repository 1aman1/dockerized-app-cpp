FROM gcc:latest

WORKDIR /app

COPY talkative.cpp .

RUN g++ -o talkative talkative.cpp

CMD ["./talkative"]